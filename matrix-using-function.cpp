#include <iostream>
using namespace std;
void inputMatrix(int, int);

void inputMatrix(int r, int c)
{
    int arr[r][c], arr2[r][c];
    cout << "1st Matrix\n";
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            cout << "Enter element at [" << (i+1) << ", " << (j+1) <<"] : ";
            cin >> arr[i][j];
        }
    }

    cout << "2nd Matrix\n";
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            cout << "Enter element at [" << (i+1) << ", " << (j+1) <<"] : ";
            cin >> arr2[i][j];
        }
    }
    
    int sum[r][c];
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            sum[i][j] = 0;
            sum[i][j] = arr[i][j] + arr2[i][j];
        }
    }

    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            cout << "Sum at [" << (i+1) << ", " << (j+1) <<"] : ";
            cout << sum[i][j] << "\n";
        }
    }
}

int main()
{
    int r, c;
    cout << "Enter row size: ";
    cin >> r;
    cout << "Enter column size: ";
    cin >> c;
    inputMatrix(r, c);
}