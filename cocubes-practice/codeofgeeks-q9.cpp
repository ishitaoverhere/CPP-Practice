#include <iostream>
#include <string>
using namespace std;

int main()
{
    char str[100], str2[100];
    cin>>str;
    for(int i=0; i<100; i++)
    {
        str2[i]=toupper(str[i]);
    }
    cout<<str2;
}