#include <iostream>
using namespace std;

int main()
{
    char str1[30], str2[30];
    cout<<"Enter 1st string: \n";
    cin.get(str1, 30);
    for(int i=0; i<30; i++)
    {
        //make sure it isn't an empty string 
        str2[i]=str1[i];
    }
    cout<<"2nd string is: ";
    cout<<str2<<endl;
    
}