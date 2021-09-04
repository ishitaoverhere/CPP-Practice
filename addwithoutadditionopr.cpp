#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    std::cout << "Enter first number: \n";
    std::cin >> num1;
    std::cout << "Enter second number: \n";
    std::cin >> num2;

    std::cout << "Sum is: " << (num1-(-num2)) << "\n";
}
