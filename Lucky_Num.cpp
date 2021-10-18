#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a[3];
        cin>>a[0]>>a[1]>>a[2];
        int flag = 0;
        if(a[0] == 7 || a[1] == 7 || a[2] == 7)
        {
            flag = 1;
        }
        if(flag==1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}