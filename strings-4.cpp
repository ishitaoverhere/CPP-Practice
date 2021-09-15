#include <iostream>
using namespace std;

int main()
{
    char str[40];
    cin.get(str, 40);
    int count=0;
    for(int i=0; str[i]!='\0'; ++i)
    {
        count++;
    }
    cout<<count;
}