#include <iostream>
using namespace std;

int main()
{
    int n=5;
    for(int i=1; i<=n; i++)
    {
        for(int j=i; j<=n; j++)
        {
            cout<<"  ";
        }
        for(int k=1; k<=i; k++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<endl;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {
            cout<<"  ";
        }
        for(int k=i; k<=n; k++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}