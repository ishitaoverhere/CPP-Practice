#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a1, a2, a3, a4, a5, a6, a7, a8, a9, a10;
        cin >> a1 >> a2 >> a3 >> a4 >> a5 >> a6 >> a7 >> a8 >> a9 >> a10;
        int sum1 = a1 + a3 + a5 + a7 + a9;
        int sum2 = a2 + a4 + a6 + a8 + a10;
        if(sum1>sum2)
        {
            cout << "1\n";
        }
        else if(sum2>sum1)
        {
            cout << "2\n";
        }
        else if(sum1==sum2)
        {
            cout << "0\n";
        }
    }
}