#include <iostream>
using namespace std;
int frequency(int ele, int arr[], int size);
int sum(int arr[], int s);

int frequency(int ele, int arr[], int size)
{
    int count=0, i;
    for(i=0; i<size; i++)
    {
        if(ele==arr[i])
        {
            count++;
        }
    }
    return count;
}

int sum(int arr[], int s)
{
    int i, add=0;
    for(i=0; i<s; i++)
    {
        int freq = frequency(arr[i], arr, s);
        if(freq%2!=0)
        {
            add=add+arr[i];
        }
    }
    return add;
}

int main()
{
    int size, i;
    cin>>size;
    int a[size];
    for(i=0; i<size; i++)
    {
        cin>>a[i];
    }
    int ans = sum(a, size);
    cout<<ans;
}