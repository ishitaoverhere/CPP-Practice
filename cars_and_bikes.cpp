#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int tyres;
        cin>>tyres;
        if(tyres%4==2)
        {
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
}