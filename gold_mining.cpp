#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, x, y;
        cin>>n>>x>>y;
        int t_people = n+1;
        int carried_gold = t_people*y;
        if(carried_gold>=x)
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