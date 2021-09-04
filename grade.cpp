#include <iostream>
using namespace std;

int main () {
    int marks;
    cout << "Enter your marks: \n";
    cin >> marks;
    if (marks > 0 && marks <= 35) {
        cout << "Fail\n";
    }
    else if (marks > 35 && marks <= 50) {
        cout << "D grade\n";
    }
    else if ( marks > 50 && marks <= 60) {
        cout << "C grade\n";
    }
    else if(marks > 60 && marks <= 70) {
        cout << "B grade\n";
    }
    else if(marks > 70 && marks <= 80) {
        cout << "A grade\n";
    }
    else if(marks > 80 && marks <= 90) {
        cout << "A+ grade\n";
    }
    else if(marks > 90 && marks <= 100) {
        cout << "Distinction\n";
    }
    else if(marks>100) {
        cout << "Invalid input\n";
    }
    else {
        cout << "Invalid input\n";
    }
}