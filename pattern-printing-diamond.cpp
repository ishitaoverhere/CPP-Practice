#include <iostream>
using namespace std;

int main()
{
    int n=5;
    for(int i=1; i<n; i++)
    {
        for(int j=i; j<=n; j++)
        {
            cout<<"  ";
        }
        for(int k=1; k<=i; k++)
        {
            cout<<"* ";
        }
        for(int l=1; l<=(i-1); l++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {
            cout<<"  ";
        }
        for(int k=i; k<=(n-1); k++)
        {
            cout<<"* ";
        }
        for(int l=i; l<=n; l++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}