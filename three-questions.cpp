#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int a1, a2, a3, b1, b2, b3;
    while(t--)
    {
        cin >> a1 >> a2 >> a3;
        cin >> b1 >> b2 >> b3;
        int sum1=0, sum2=0;
        if(a1==1)
        {
            sum1 = sum1 + 1;
        }
        if(a2==1)
        {
            sum1 = sum1 + 1;
        }
        if(a3==1)
        {
            sum1 = sum1 + 1;
        }
        if(b1==1)
        {
            sum2 = sum2 + 1;
        }
        if(b2==1)
        {
            sum2 = sum2 + 1;
        }
        if(b3==1)
        {
            sum2 = sum2 + 1;
        }

        if(sum1==sum2)
        {
            cout << "Pass\n";
        }
        else
        {
            cout << "Fail\n";
        }
    }
}