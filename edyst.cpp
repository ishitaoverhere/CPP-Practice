#include<iostream>
using namespace std;

int main()
{
    int row, col, count=1;
    cin>>row>>col;

    for(int p=0; p<row; p++)
    {
        for(int q=0; q<col; q++)
        {
            cout<<count<<" ";
        }
        cout<<endl;
        count++;
    }
    return 0;
}
