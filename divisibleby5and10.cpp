#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;
    if(num % 10 == 0 && num % 5 == 0) {
        cout << num << " is divisible by 5 and 10 both. \n";
    }
    else {
        cout << num << " is not divisible by both 5 and 10. \n";
    }
}