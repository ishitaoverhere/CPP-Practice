#include <iostream>
using namespace std;

int main()
{
    int t; 
    cin >> t;
    int sa, sb, sc;
    for(int i=0; i<t; i++)
    {
        cin >> sa >> sb >> sc;
        if(sc<sa && sc<sb)
        {
            cout << "Alice\n";
        }
        else if(sb<sa && sb<sc)
        {
            cout << "Bob\n";
        }
        else if(sa<sb && sa<sc)
        {
            cout << "Draw\n";
        }
    }
}