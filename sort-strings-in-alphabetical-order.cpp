#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str[5], temp;
    cout << "Enter 5 words : "<<endl;
    for(int i=0; i<5; ++i)
    {
        getline(cin, str[i]);
    }
    for(int i=0; i<5; ++i)
    {
        for(int j=i+1; j<5; ++j)
        {
            if(str[i]>str[j])
            {
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }

    cout<<"In Alphabetical order: "<<endl;
    for(int i=0; i<5; ++i)
    {
        cout<<str[i]<<endl;
    }

    return 0;
}