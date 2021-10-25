#include <iostream>
using namespace std;

int main()
{
    int arr[40], n, i;
    cout << "Enter size of an array:";
    cin>>n;

    cout << "Enter array elements:";
    for (i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout<<"Array elements at even indice are: "<<endl;
    for(i=0; i<n; i++)
    {
        if(i%2==0)
        {
            cout<<arr[i]<<"  ";
        }
    }
}