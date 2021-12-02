#include <iostream>
using namespace std;

int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int x, y, tot;
        cin>>x>>y>>tot;
        int sum = x+y;
        if(sum>tot)
        {
            cout<<"NO\n";
        }
        else
        {
            cout<<"YES\n";
        }
    }
    return 0;
}