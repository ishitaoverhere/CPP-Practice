#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int n, k;
    int p[n];
    while(t--)
    {
        cin >> n >> k;
        for(int i=0; i<n; i++)
        {
            cin >> p[i];
        }
        //calculating old revenue
        int old_revenue = 0;
        for(int i=0; i<n; i++)
        {
            old_revenue = old_revenue + p[i];
        }

        //calculating new revenue
        int new_revenue = 0;
        for(int i=0; i<n; i++)
        {
            if(p[i]>k)
            {
                p[i]=k;
            }
        }
        for(int i=0; i<n; i++)
        {
            new_revenue = new_revenue + p[i];
        }

        cout << (old_revenue-new_revenue) << "\n";
    }
}