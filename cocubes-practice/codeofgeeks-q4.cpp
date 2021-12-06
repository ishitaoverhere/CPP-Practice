#include <iostream>
using namespace std;
void ReverseArray(int *arr, int length);
int main()
{
    int t[20], size;
    cout<<"Enter the size: "<<endl;
    cin>>size;
    cout<<"Enter elements: "<<endl;
    for(int p=0; p<size; p++)
    {
        cin>>t[p];
    }
    ReverseArray(t, size);
    return 0;
}

void ReverseArray(int *arr, int length)
{
    for(int i=length-1; i>=0; i--)
    {
        cout<<arr[i]<<' ';
    }
}