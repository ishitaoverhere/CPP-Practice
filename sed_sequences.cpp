#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, k, i;
        cin >> n >> k;
        int a, sum=0;
        for(i=0; i<n; i++)
        {
            cin >> a;
            sum = sum + a;   
        }
        if(sum%k==0)
        {
            cout << "0\n";
        }     
        else{
            cout << "1\n";
        }
    }
}