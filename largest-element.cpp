#include <iostream>
using namespace std;

int main()
{
    int arr[5];
    for (int i=0; i<5; i++)
    {
        cout << "Enter an element: ";
        cin >> arr[i];
    }
    int large=arr[0];
    for (int i=0; i<5; i++)
    {
        if (arr[i]>large)
        {
            large=arr[i];
        }
    }
    cout << large;
}