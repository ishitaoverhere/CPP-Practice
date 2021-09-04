#include <iostream>
using namespace std;

int main () {
    int age;
    cout << "Enter age: \n";
    cin >> age;
    if ( age > 18 ) {
        cout << "Valid for process";
    }
    else {
        cout << "Invalid for process";
    }
}