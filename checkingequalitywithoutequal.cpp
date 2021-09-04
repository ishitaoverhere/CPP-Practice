#include <iostream>
using namespace std;

int main ()
{
    //using bitwise XOR ^
    int num1, num2;
    std::cout << "Enter the first number: " << endl;
    std::cin >> num1;
    std::cout << "Enter the second number: " << endl;
    std::cin >> num2;

    if (num1 ^ num2) {
        std::cout << "NOT EQUAL!!!!" << endl;
    }
    else {
        std::cout << "EQUAL!!!" << endl;
    }

}