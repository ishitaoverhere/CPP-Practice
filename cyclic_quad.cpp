#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int a,b,c,d;
    for(int i=0; i<t; i++)
    {
        cin >> a >> b >> c >> d;
        if((a>=1 && a<=357) && (b>=1 && b<=357) && (c>=1 && c<=357) && (d>=1 && d<=357))
        {
            if((a+b+c+d)==360)
            {
                if(((a+c)==180) && ((b+d)==180))
                {
                    cout << "YES" << "\n";
                }
                else { cout << "NO" <<"\n"; }
            }
            else { cout << "NO" <<"\n"; }
        }
        else { cout << "NO" <<"\n"; }
    }
}