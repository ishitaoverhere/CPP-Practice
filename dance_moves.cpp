#include <bits/stdc++.h>
using namespace std;

#define tc ll t sc cin >> t sc while(t--)
#define ff first
#define sc ;
#define ss second
#define pb push_back
#define pp pop_back
#define mp make_pair
#define ll long long
#define Radhe ios::sync_with_stdio(false);
#define Krishna cin.tie(NULL);

int main()
{
    tc
    {
        ll x, y;
        cin >> x >> y;

        if(x <= y)
        {
            cout << (y-x+1)/2+(y-x)%2 << "\n";
        }
        else
        {
            cout << (x-y) << "\n";
        }
    }
}