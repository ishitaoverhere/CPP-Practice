#include <iostream>
using namespace std;

int main()
{
    int num1, num2, num3;
    std::cout << "Enter the first number: " << endl;
    std::cin >> num1;
    std::cout << "Enter the second number: " << endl;
    std::cin >> num2;
    std::cout << "Enter the third number: " << endl;
    std::cin >> num3;

    if (num1 > num2)
    {
        if (num1 > num3)
        {
            std::cout << "num1 is the greatest among three \n";
        }
        else
        {
            std::cout << "num3 is the greatest among three \n";
        }
    }
    else if (num2 > num3)
        std::cout << "num2 is the greatest among three \n";
    else
        std::cout << "num3 is the greatest among three \n";
    
    // if ((num1 > num2) && (num1 > num2))
    // {
    //     std::cout << num1 <<" is the greatest.";
    // }
    // else if ((num2 > num1) && (num2 > num3))
    // {
    //     std::cout << num2 <<" is the greatest.";
    // }
    // else
    // {
    //     std::cout << num3 <<" is the greatest.";
    // }

}