#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int x, y, z, a, b, c;
    for(int i=0; i<t; i++)
    {
        cin >> x >> a >> y >> b >> z >> c;
        if(a>=x)
        {
            if(b>=y)
            {
                if(c<=z)
                {
                    cout << "YES\n";
                }
                else
                {
                    cout << "NO\n";
                }
            }
            else 
            {
                cout << "NO\n";
            }
        }
        else 
        {
            cout << "NO\n";
        }
    }
}