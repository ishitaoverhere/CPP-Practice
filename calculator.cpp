#include <iostream>

using namespace std;

int main()
{
    float num1, num2;
    float result;
    char action;
    cout << "Welcome to calculator!" << endl;
    cout << "Enter the first Number: " << endl;
    cin>>num1;
    cout << "Enter the second Number: " << endl;
    cin>>num2;
    cout << "Choose an operation: " << endl;
    cout << "1. For addition '+' : Press 1" << endl;
    cout << "2. For subtraction '-' : Press 2" << endl;
    cout << "3. For multiplication '*' : Press 3" << endl;
    cout << "4. For division '/' : Press 4" << endl;
    cin>>action;
    cout << "Your chosen action is: " << action << endl;

    if (action == '1')
    {
        result = num1 + num2;
        cout << "Your answer is: " << result << endl;
    }
    else if (action == '2')
    {
        result = num1 - num2;
        cout << "Your answer is: " << result << endl;
    }
    else if (action == '3')
    {
        result = num1*num2;
        cout << "Your answer is: " << result << endl;
    }
    else if (action == '4')
    {
        result = num1/num2;
        cout << "Your answer is: " << result << endl;
    }
    else 
    {
        cout << "You entered the wrong operator" << endl;
    }
    return 0;
}