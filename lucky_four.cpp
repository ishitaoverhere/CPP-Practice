#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int n;
    for(int i=0; i<t; i++)
    {
        int rem, count=0;
        cin >> n;
        while(n!=0)
        {
            rem = n % 10;
            if(rem == 4)
                count++;
            n /= 10;
        }
        cout << count << "\n";
    }
}