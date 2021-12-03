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
        for(int l=1; l<=(i-1); l++) //changes here
        {
            cout<<"* ";
        }
        cout<<endl;
    }

    //another way
    for(int i=1; i<=n; i++)
    {
        for(int j=i; j<=n; j++)
        {
            cout<<"  ";
        }
        for(int k=1; k<i; k++) //changes here
        {
            cout<<"* ";
        }
        for(int l=1; l<=i; l++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}