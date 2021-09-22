#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str = "Hello*HowAreYou";
    int pos = str.find("*");
    cout<<str.substr(pos+1)<<endl;
}