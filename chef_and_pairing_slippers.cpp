#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int total, left, cost;
        cin>>total>>left>>cost;
        int right = total-left;
        int pairs;
        if(right>=left)
        {
            pairs=left;
        }
        else if(left>=right)
        {
            pairs=right;
        }
        int total_cost = pairs*cost;
        cout<<total_cost<<"\n";
    }
    return 0;
}