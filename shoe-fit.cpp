#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int a, b, c;
    while(t--)
    {
        cin >> a >> b >> c;
        int count1 = 0, count0 = 0;
        if(a==1)
        {
            count1 = count1 + 1;
        }
        else if(a==0)
        {
            count0 = count0 + 1;
        }
        if(b==1)
        {
            count1 = count1 + 1;
        }
        else if(b==0)
        {
            count0 = count0 + 1;
        }
        if(c==1)
        {
            count1 = count1 + 1;
        }
        else if(c==0)
        {
            count0 = count0 + 1;
        }


        if(count1==1 || count1==2)
        {
            cout << "1\n";
        }
        else
        {
            cout << "0\n";
        }
    }
}