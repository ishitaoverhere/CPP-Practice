#include <iostream>
using namespace std;

int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int a, b;
        cin>>a>>b;
        if(a==0)
        {
            cout<<"Liquid\n";
        }
        else if(b==0)
        {
            cout<<"Solid\n";
        }
        else
        {
            cout<<"Solution\n";
        }
    }
    return 0;
}