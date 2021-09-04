#include <iostream>
using namespace std;

int main()
{
    int num, r=0, sum=0;
    cout << "Enter a num: \n";
    cin >> num;
    int temp = num;
    while (num>0)
    {
        r = num%10;
        sum = (sum)+(r*r*r);
        num = num/10;
    }
    if (sum == temp)
    {
        cout << temp << " is an Armstrong Number\n";
    }
    else 
    {
        cout << temp << " is not an Armstrong Number\n";
    }
}