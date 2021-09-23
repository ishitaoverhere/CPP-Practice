#include <iostream>
using namespace std;

int main()
{
    int a[20];
    int *ptr, n, sum=0, i;
    cout<<"Enter number of elements: "<<endl;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cout<<"Enter a["<<i<<"] = ";
        cin>>a[i];
    }

    ptr = a;
    for(i=0; i<n; i++)
    {
        sum = sum + (*ptr);
        ptr++;
    }
    cout<<"Sum is: ";
    cout<<sum<<endl;

    return 0;
}