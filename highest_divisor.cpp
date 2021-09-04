#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if(n%10==0)
    {
        cout << "10\n";
    }
    else if(n%9==0)
    {
        cout << "9\n";
    }
    else if(n%8==0)
    {
        cout << "8\n";
    }
    else if(n%7==0)
    {
        cout << "7\n";
    }
    else if(n%6==0)
    {
        cout << "6\n";
    }
    else if(n%5==0)
    {
        cout << "5\n";
    }else if(n%4==0)
    {
        cout << "4\n";
    }
    else if(n%3==0)
    {
        cout << "3\n";
    }
    else if(n%2==0)
    {
        cout << "2\n";
    }
    else if(n%1==0)
    {
        cout << "1\n";
    }
}