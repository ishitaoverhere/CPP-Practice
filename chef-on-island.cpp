#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int x, y, xr, yr, d;
    while(t--)
    {
        cin >> x >> y >> xr >> yr >> d;
        double food, water;
        food = x/xr;
        water = y/yr;
        double survival = std::min(food, water);
        if(survival>=d)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}