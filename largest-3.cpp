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
    int first, second, third;
    first = arr[0];
    second = arr[1];
    third = arr[2];
    for(int i=0; i<5; i++)
    {
        if(arr[i]>first)
        {
            third = second;
            second = first;
            first = arr[i];
        }
        else if(arr[i]>second)
        {
            third = second;
            second = arr[i];
        }
        else if(arr[i]>third)
        {
            third = arr[i];
        }
    }
    cout << first << " " << second << " " << third;
}