#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,d,c=0;
        cin>>n;
        while(n>0)
        {
            d=floor(sqrt(n));
            d=d*d;
            n=n-d;
            c++;
        }
        cout<<c<<'\n';
    }
	return 0;
}