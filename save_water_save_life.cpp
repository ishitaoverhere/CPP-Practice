#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int H, x, C;
        double y;
        cin>>H>>x>>y>>C;
        double y_floor = floor(y/2);
        int cons_per_house = x + y_floor;
        int total_cons = cons_per_house*H;
        if(total_cons<=C)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }
    return 0;
}