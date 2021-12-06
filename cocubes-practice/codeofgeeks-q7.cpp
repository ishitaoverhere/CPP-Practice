#include <iostream>
using namespace std;
int SearchElement(int *arr, int item, int size)
{
    for(int i=0; i<size; i++)
    {
        if(arr[i]==item)
        {
            return (i+1);
        }
    }
    return -1;
}
int main()
{
    int size;
    cin>>size;
    int a[size];
    for(int i=0; i<size; i++)
    {
        cin>>a[i];
    }
    int x;
    cin>>x;
    cout<<endl;
    int ans = SearchElement(a, x, size);
    cout<<ans;
}