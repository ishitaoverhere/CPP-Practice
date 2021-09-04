#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    int rating;
    for(int i=0; i<t; i++)
    {
        cin >> rating;
        if(rating>=2000)
        {
            cout << "1\n";
        }
        else if(rating>=1600 && rating<2000)
        {
            cout << "2\n";
        }
        else if(rating<1600)
        {
            cout << "3\n";
        }
    }
}