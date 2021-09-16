//wap to check whether the given string is palindrome or not
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
        char str[100];
        int i, length;
        int flag = 0;    

        cout<<"\n Enter String : ";
        cin.get(str, 100); 

        length = strlen(str);    

        for(i=0; i<length; i++)
        {
                if(str[i] != str[length-i-1])
                {
                    flag = 1;
                    break;
                }
        }    
        if(flag)
        {
            cout<<" "<<str<<" is not a palindrome"<<endl;
        }    
        else
        {
            cout<<" "<<str<< " is a palindrome"<<endl;
        }
        return 0;
}