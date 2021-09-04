#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int x,a,b;
    for(int i=0; i<t; i++)
    {
        cin >> x >> a >> b;
        int dissolved = a + ((100 - x) * b);
        cout << (dissolved*10) << "\n";
    }
}