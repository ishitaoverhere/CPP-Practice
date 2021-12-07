#include <iostream>
using namespace std;

int main()
{
    int r,c,i,j,search,f_1,f_2;
    cin>>r>>c;
    int arr[r][c];
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            cin>>arr[i][j];
        }
    }
    cin>>search;
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            if(search==arr[i][j])
            {
                f_1 = i;
                f_2 = j;
            }
        }
    }
    
    if(f_1>=0 && f_1<=r) cout<<"("<<f_1<<", "<<f_2<<")";
    else cout<<"(-1, -1)";
}