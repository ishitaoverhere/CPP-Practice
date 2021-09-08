#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int limak=0, bob=0, i, j, a, b;
        cin >> a >> b;
        for(i=0; 1; i++)
        {
            if(i%2!=0)
            {
                limak = limak + i;
            }
            else
            {
                bob = bob + i;
            }
            if(limak>a)
            {
                cout << "Bob\n";
                break;
            }
            else if(bob>b)
            {
                cout << "Limak\n";
                break;
            }
        }
    }
}