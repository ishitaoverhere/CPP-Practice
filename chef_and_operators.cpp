#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int a, b;
    for(int i=0; i<t; i++)
    {
        cin >> a >> b;
        if(a > b)
        {
            cout << ">\n";
        }
        else if(a < b)
        {
            cout << "<\n";
        }
        else if(a == b)
        {
            cout << "=\n";
        }
    }
}