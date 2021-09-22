#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    cout<<"Enter string: "<<str<<endl;
    getline(cin, str);
    int size = str.size(), i, j;
    for(i = 0; i < size; i++)
    {
        string find, replace;
        find = str.substr(i, 2);
        if(find == "is")
        {
            replace = "was";
            for (j = 0; j < 3; j++)
            {
                str[i+j] = replace[j];
            }
        }
    }
    cout<<str<<endl;
}