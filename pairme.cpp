#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int x, y, z;
    for(int i=0; i<t; i++)
    {
        cin >> x >> y >> z;
        if((x+y)==z)
        {
            cout << "YES\n";
        }
        else if((z+y)==x)
        {
            cout << "YES\n";
        }
        else if((z+x)==y)
        {
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
}