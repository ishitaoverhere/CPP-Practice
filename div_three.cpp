#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        //n-number of setters
        //k-number of problems required for each set
        //d-number of days contest must go on
        int n, k, d, i;
        cin >> n >> k >> d;
        int a[n];
        for(i=0; i<n; i++)
        {
            cin >> a[i];
        }
        int sum=0;
        for(i=0; i<n; i++)
        {
            sum = sum + a[i];
        }
        int requirement = sum/k;
        if(requirement>=d)
        {
            cout << d << endl;
        }
        else if(requirement<d)
        {
            cout << requirement << endl;
        }
    }
}