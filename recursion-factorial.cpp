#include <iostream>
using namespace std;

int f(int n){
    if(n<=1)
        return 1;
    else
        return n*f(n-1);
}

int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;
    cout << "Factorial is: " << f(number);
    return 0;
}