#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int a, b;
    for(int i=0; i<t; i++)
    {
        cin >> a >> b;
        if(a>=1 && a<=100)
        {
            if(b>=0 && b<=10)
            {
                int res = a+b;
                if(res < 3)
                {
                    cout << "1\n";
                }
                else if(res >= 3 && res <= 10)
                {
                    cout << "2\n";
                }
                else if(res >= 11 && res <= 60)
                {
                    cout << "3\n";
                }
                else if(res>60)
                {
                    cout << "4\n";
                }
            }
        }
    }
}