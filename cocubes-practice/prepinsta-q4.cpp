#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    cin>>str;
    int len = str.length();
    int i, ans=str[0];
    for(i=0; i<len; i++)
    {
        if(str[i]=='A')
        {
            ans = ans&str[i+1];
        }
        else if(str[i]=='B')
        {
            ans = ans|str[i+1];
        }
        else if(str[i]=='C')
        {
            ans = ans ^ str[i+1];
        }
    }
    cout<<ans;
}