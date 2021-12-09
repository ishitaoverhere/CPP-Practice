#include <iostream>
using namespace std;

int main()
{
    int size, i;
    cin>>size;
    int arr[size];
    for(i=0; i<size; i++)
    {
        cin>>arr[i];
    }
    for(i=0; i<size; i++)
    {
        int j;
        for(j=i+1; j<size; j++)
        {
            if(arr[i]>arr[j])
                continue;
            else if(arr[i]<=arr[j])
                break;
        }
        if(j==size)
        {
            cout<<arr[i]<<endl;
        }
    }
}