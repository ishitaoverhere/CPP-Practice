#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, x, i;
        cin >> n >> x;
        int s[n], r[n];
        for(i=0; i<n; i++)
        {
            cin >> s[i] >> r[i];
        }
        int max = 0;
        for(i=0; i<n; i++)
        {
            if(s[i]<=x && max < r[i])
            {
                max = r[i];
            }
        }
        cout << max << "\n";
    }
}