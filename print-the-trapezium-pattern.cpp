#include <iostream>
using namespace std;

int main()
{
    int n=4;
    int p=1;
    int q=17;
    int r=14;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {
            cout<<"  ";
        }
        for(int j=i; j<=n; j++)
        {
            cout<<p<<"*";
            p++;
        }
        for(int j=i; j<=n; j++)
        {
            if(q<=20) {
            cout<<q<<"*";
            q++; }
        }
        cout<<endl;
    }
    
}