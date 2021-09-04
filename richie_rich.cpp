#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int a, b, x;
    for(int i=0; i<t; i++)
    {
        cin >> a >> b >> x;
        int increase_by = b-a;
        int years = increase_by/x;
        cout << years << "\n";
    }
}