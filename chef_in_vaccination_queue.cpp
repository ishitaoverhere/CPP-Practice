#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, p, x, y;
        cin>>n>>p>>x>>y;
        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        int minutes=0;
        for(int i=0; i<n; i++)
        {
            if(i<p){
                if(arr[i]==1){
                    minutes = minutes+y;
                }
                else if(arr[i]==0){
                    minutes = minutes+x;
                }
            }
        }
        cout<<minutes<<"\n";
    }
    return 0;
}