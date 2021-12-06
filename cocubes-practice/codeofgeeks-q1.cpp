#include <iostream>
using namespace std;

int main()
{
    int m, n;
    cout<<"Enter m and n"<<endl;
    cin>>m>>n;
    int sum=0;
    for(int i=m; i<=n; i++)
    {
        if(i%3==0)
        {
            if(i%5==0)
            {
                sum=sum+i;
            }
        }
    }
    cout<<sum<<endl;
}