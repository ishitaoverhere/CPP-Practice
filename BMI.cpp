#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int m, h;
    for(int i=0; i<t; i++)
    {
        cin >> m >> h;
        int bmi = m/(h*h);
        if(bmi <= 18)
        {
            cout << "1\n";
        }
        else if(bmi <= 24 && bmi >= 19)
        {
            cout << "2\n";
        }
        else if(bmi <= 29 && bmi >= 25)
        {
            cout << "3\n";
        }
        else if(bmi >= 30)
        {
            cout << "4\n";
        }
    }
}