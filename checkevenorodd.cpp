#include <iostream>
using namespace std;

int main()
{
    int num1; 
    std::cout << "Enter number: ";
    std::cin >> num1;

    (num1 % 2 == 0) ? cout << num1 << " is even." :  cout << num1 << " is odd.";
    
    return 0;
}