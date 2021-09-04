#include <iostream>
using namespace std;

int fact(int n) //formal arguments
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact*i;
    }
    return fact;
}

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    int answer = fact(num); //actual arguments
    cout << "Factorial of " << num << " is " << answer;
}