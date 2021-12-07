#include <iostream>
using namespace std;

int main()
{
    int size, i, search, occurence, count=0, found=0;
    cin>>size;
    int arr[size];
    for(i=0; i<size; i++)
    {
        cin>>arr[i];
    }
    cin>>search;
    cin>>occurence;
    for(i=0; i<size; i++)
    {
        if(search==arr[i])
        {
            count++;
            if(count==occurence)
            {
                found=i;
            }
        }

    }
    cout<<found;
}