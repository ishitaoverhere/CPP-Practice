#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t; 
    cin >> t;
    int x, m, d;
    for(int i=0; i<t; i++)
    {
        cin >> x >> m >> d;
        int answer = std::min((x*m),(x+d));
        cout << answer << "\n";
    }
}