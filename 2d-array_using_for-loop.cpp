#include <iostream>
using namespace std;

int main()
{
    int arr[3][3];
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout << "Enter element at [" << (i+1) << ", " << (j+1) <<"] : ";
            cin >> arr[i][j];
        }
    }
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout << arr[i][j] << "      ";
        }
        cout << "\n";
    }
}