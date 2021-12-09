#include <iostream>
using namespace std;

int main()
{
    int size,i,j;
    cin>>size;
    int arr[size];
    
    for(i=0; i<size; i++)
    {
        cin>>arr[i];
    }
    int diff=arr[1]-arr[0], first=arr[1], second=arr[0];
    for(i=0; i<size; i++)
    {
        for(j=i+1; j<size; j++)
        {
            if(diff<arr[j]-arr[i]) {
                diff = arr[j]-arr[i];
                first = arr[j];
                second = arr[i];
            }
        }
    }
    cout<<diff<<" "<<first<<" "<<second<<endl;
}