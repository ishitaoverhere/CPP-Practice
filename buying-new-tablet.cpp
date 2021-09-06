#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, b, i, max = 0;
        cin >> n >> b;
        int w[n], h[n], p[n];
        for(i=0; i<n; i++)
        {
            cin >> w[i] >> h[i] >> p[i];
        }

        int a[n];
        for(i=0; i<n; i++)
        {
            a[i] = w[i]*h[i];
        }

        for(i=0; i<n; i++)
        {
            if(p[i]<=b && max < a[i])
            {
                max = a[i];
            }
        }

        if(max==0)
        {
            cout << "no tablet\n";
        }
        else
        {
            cout << max << "\n";
        }
    }
}