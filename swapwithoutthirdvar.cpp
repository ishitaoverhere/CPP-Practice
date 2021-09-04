#include <iostream>
using namespace std;

int main ()
{
    int num1, num2;
    std::cout << "Enter the first number: " << endl;
    std::cin >> num1;
    std::cout << "Enter the second number: " << endl;
    std::cin >> num2;

    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;

    std::cout << "First number now is: " << num1 << endl;
    std::cout << "Second number now is: " << num2 << endl;

}