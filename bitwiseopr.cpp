#include <iostream>

using namespace std;

int main()
{
    int num1,num2;
    num1=11;
    num2=22;
    cout << (num1&num2) << endl;
    cout << (num1|num2) << endl;
    cout << (num1^num2) << endl;
    cout << (~num1) << endl;
    cout << (num1>>2) << endl;
    cout << (num2<<2) << endl;
}