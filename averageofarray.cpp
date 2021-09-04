#include <iostream>
using namespace std;

int main()
{
    int arr[5];
    for(int i=0; i<5; i++)
    {
        cout << "Enter an element: ";
        cin >> arr[i];
    }
    int sum=0;
    for(int i=0; i<5; i++)
    {
        sum=sum+arr[i];
    }

    int length=sizeof(arr)/sizeof(arr[0]);

    int avg = (sum/length);
    int avg2= (sum/5);
    cout << avg <<"\n";
    cout << avg2;
}