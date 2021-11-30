#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        int len = str.length();
        int count=0;
        for(int i=0; i<len; i++)
        {
            if(str[i]=='1')
            {
                if(str[i+1]!='1')
                {
                    count++;
                }
            }
        }
        cout<<count;
    }
    return 0;
}