#include <iostream>
#include <string>
using namespace std;

int main() {
   int numOfStudents;
   cout << "Enter the number of students: " << endl;
   cin >> numOfStudents;
   
   string names[100];
   int grades[100];
   
   for (int i=0; i<numOfStudents; i++){
       cout << "Enter name of student number " << i+1 << ":" << endl;
       cin >> names[i];
       
       cout << "Enter the grade for " << names[i] << ":" << endl;
       cin >> grades[i];
   }
   
   int total = 0;
   int maxGrade = grades[0];
   int minGrade = grades[0];
   string topStudent = names[0]; 
   string lowStudent = names[0];
   
   for (int i=0; i<numOfStudents; i++){
       total += grades[i];
       
       if (grades[i] > maxGrade){
           maxGrade = grades[i];
           topStudent = names[i];
       }
       
       if (grades[i] < minGrade){
           minGrade = grades[i];
           lowStudent = names[i];
       }
       
   }
   
   double average = static_cast<double>(total)/numOfStudents;
   
   cout << "======================" << endl;
   cout << "The total of grades is: " << total << endl;
   cout << "The average of grades is: " << average << endl;
   cout << "Max grade is: " << maxGrade << "(got it: " << topStudent << ")" << endl;
   cout << "Min grad is: " << minGrade << "(got it: " << lowStudent << ")" << endl;
    return 0;
}
