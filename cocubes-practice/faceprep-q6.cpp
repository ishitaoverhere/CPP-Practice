#include <iostream>
using namespace std;

int main()
{
    int m, n, i, j;
    cin>>m>>n;
    int arr1[m], arr2[n];
    for(i=0;i<m;i++)
    {
        cin >> arr1[i];
    }

    for(i=0;i<m;i++)
    {
        cin >> arr2[i];
    }

    for(i=0; i<m; i++)
    {
        for(j=0; j<m; j++)
        {
            if(arr1[i]==arr2[j] && arr1[j]==arr2[i])
            {
                cout<<arr1[i]<<arr1[j];
            }
        }
    }
}