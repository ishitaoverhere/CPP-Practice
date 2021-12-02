#include <iostream>
using namespace std;

int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        int highest=arr[0];
        for(int i=1; i<=n; i++)
        {
            if(highest<arr[i])
            {
                highest=arr[i];
            }
        }
        int diff=0;
        for(int i=0; i<n; i++)
        {
            int high=highest;
            diff = high-arr[i];
        }

        cout<<diff<<"\n";
    }
    return 0;
}