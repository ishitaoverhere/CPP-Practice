#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int arr[10];
    int k;
    for(int i=0; i<t; i++)
    {
        for(int j=0; j<10; j++)
        {
            cin >> arr[j];
        }
        cin >> k;
        for(int j=9; j>=0; j--)
        {
            if(arr[j]<=k)
            {
                k=k-arr[j];
                arr[j]==0;
            }
            else if(arr[j]>k)
            {
                k==0;
                arr[j]=arr[j]-k;
                cout<<j+1<<endl;
                break;
            }
        }
    }
    return 0;
}