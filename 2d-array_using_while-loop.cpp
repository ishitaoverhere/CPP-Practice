#include <iostream>
using namespace std;

int main()
{
    int arr[3][3];
    int i=0, j=0;
    while(i<3)
    {
        while(j<3)
        {
            cout << "Enter element at [" << (i) << ", " << (j) <<"] : ";
            cin >> arr[i][j];
            j++;
        }
        i++;
    }
    i=0, j=0;
    while(i<3)
    {
        while(j<3)
        {
            j=0;
            cout << arr[i][j] << "      ";
            j++;
        }
        cout << "\n";
        i++;
    }
}