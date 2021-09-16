#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char str[50], str2[50];
    cout<<"Enter a string: "<<endl;
    cin.get(str, 50);
    int flag=0;
    strcpy(str2, str);
    strrev(str);
    if(strcmp(str, str2))
    {
        flag=1;
    }
    if(flag==1)
    {
        cout<<"Not a palindrome"<<endl;
    }
    else
    {
        cout<<"Is a palindrome"<<endl;
    }

    return 0;
}