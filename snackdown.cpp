#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int n;
    for(int i=0; i<t; i++)
    {
        cin >> n;
        if(n==2010 || n==2015 || n==2016 || n==2017 || n==2019)
        {
            cout << "HOSTED\n";
        }
        else 
        {
            cout << "NOT HOSTED\n";
        }
    }
}