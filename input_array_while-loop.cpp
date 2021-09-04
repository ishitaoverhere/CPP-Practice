#include <iostream>
using namespace std;

int main()
{
    int roll[5];
    int i=0;
    while(i<5)
    {
        cin >> roll[i];
        i++;
    }
    i=0;
    while(i<5)
    {
        cout << roll[i];
        i++;
    }
}