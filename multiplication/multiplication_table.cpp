#include <iostream>
using namespace std;

int main() {
    int num;
    
    cout << "Enter number: " << endl;
    cin >> num;
    
    for(int i=1; i<=10; i++){
        cout << num << "*" << i << "=" << i*num << endl;
    }
    return 0;
}
