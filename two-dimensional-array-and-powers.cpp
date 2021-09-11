#include <iostream>
using namespace std;
void square(int row, int col, int arr[][3]);

int main()
{
    int a[2][3];
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<3; j++)
        {
            cin>>a[i][j];
        }
    }
    square(2, 3, a);
}

void square(int row, int col, int arr[][3])
{
    int arr2[row][col];
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<3; j++)
        {
            arr2[i][j]=arr[i][j]*arr[i][j];
        }
    }
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout<<arr2[i][j]<<endl;
        }
    }
}