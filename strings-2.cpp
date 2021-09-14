#include <iostream>
using namespace std;

int main()
{
    string str;
    getline(cin, str);
    str.push_back('I');
    cout<<str<<endl;
    str.pop_back();
    cout<<str<<endl;
}