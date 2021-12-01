#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x, y, z;
        cin>>x>>y>>z;
        int add_points = z*2;
        int total_points = x + add_points;
        if(total_points>=y)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }
    return 0;
}