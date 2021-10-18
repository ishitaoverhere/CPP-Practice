#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a[5];
        cin>>a[0]>>a[1]>>a[2]>>a[3]>>a[4];
        int ind=0, eng=0,dr=0;
        for(int i=0; i<5; i++)
        {
            if(a[i]==0)
            {
                dr=dr+1;
            }
            else if(a[i]==1)
            {
                ind=ind+1;
            }
            else if(a[i]==2)
            {
                eng=eng+1;
            }
        }
        if(ind>eng)
        {
            cout<<"INDIA"<<endl;
        }
        else if(eng>ind)
        {
            cout<<"ENGLAND"<<endl;
        }
        else if(ind==eng)
        {
            cout<<"DRAW"<<endl;
        }
    }
}