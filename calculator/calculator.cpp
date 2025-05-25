#include <iostream>
using namespace std;

int main() {
    int num1, num2; 
    char op;
    cout << "Enter first number:" << endl;
    cin >> num1;
    cout << "Enter the process \" +,-,/,*\": " << endl;
    cin >> op;
    cout << "Enter second number:" << endl;
    cin >> num2;
    
    if (op=='+'){
        cout << "The result is: " << num1 + num2 << endl;
    }
    else  if (op=='-'){
        cout << "The result is: " << num1 - num2 << endl;
    }
    else if (op=='/') {
    if (num2 != 0) {
        cout << "The result is: " << num1 / num2 << endl;
    } else {
        cout << "Error!.. Cannot divide by zero!" << endl;
    } 
    }
    else  if (op=='*'){
        cout << "The result is: " << num1 * num2 << endl;
    }
    else {
        cout << "Incorrect operation!" << endl;
    }
    return 0;
}
