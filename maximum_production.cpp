#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int d, x, y, z;
    for(int i=0; i<t; i++)
    {
        cin >> d >> x >> y >> z;
        //first strategy
        int chef_first = x*7;
        //second strategy
        int chef_second;
        int first_part = d*y;
        int second_part = (7-d)*z;
        chef_second = first_part + second_part;
        //answer
        int answer = std::max(chef_first, chef_second);
        cout << answer << "\n";
    }
}