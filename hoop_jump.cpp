#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int n;
    for(int i=0; i<t; i++)
    {
        cin >> n;
        int answer = (n/2)+1;
        cout << answer << "\n";
    }
}