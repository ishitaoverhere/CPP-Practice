#include <iostream>
using namespace std;

int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int arr[7];
        for(int i=0; i<7; i++)
        {
            cin>>arr[i];
        }
        int count_sun=0, count_cl=0;
        for(int i=0; i<7; i++)
        {
            if(arr[i]==1)
            {
                count_sun++;
            }
            else if(arr[i]==0)
            {
                count_cl++;
            }
        }
        if(count_sun>count_cl)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }
    return 0;
}