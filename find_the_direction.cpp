#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x;
        cin>>x;
        x=x%4;
        if(x==1)
        {
            cout<<"East\n";
        }
        else if(x==0)
        {
            cout<<"North\n";
        }
        else if(x==2)
        {
            cout<<"South\n";
        }
        else if(x==3)
        {
            cout<<"West\n";
        }
    }
    return 0;
}