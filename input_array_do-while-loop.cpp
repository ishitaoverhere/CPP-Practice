#include <iostream>
using namespace std;

int main()
{
    int arr[5];
    int i=0;
    do
    {
        cin >> arr[i];
        i++;
    }
    while(i<5);
    i=0;
    do
    {
        cout << arr[i];
        i++;
    }
    while(i<5);
}