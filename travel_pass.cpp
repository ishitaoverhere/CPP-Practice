#include <iostream>
using namespace std;

int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n, a_dis, b_st;
        cin>>n>>a_dis>>b_st;
        string str;
        cin>>str;
        int minutes=0;
        for(int i=0; i<n; i++)
        {
            if(str[i]=='1')
            {
                minutes = minutes+b_st;
            }
            else if(str[i]=='0')
            {
                minutes = minutes+a_dis;
            }
        }
        cout<<minutes<<"\n";
    }
    return 0;
}