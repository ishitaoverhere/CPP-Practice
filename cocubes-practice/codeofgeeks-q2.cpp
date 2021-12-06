#include <iostream>
using namespace std;

int main()
{
    int dir, d1, s1, d2, s2, t1, t2, rel=0;
    cout<<"Enter dir, d1, s1, d2 and s2"<<endl;
    cin>>dir>>d1>>s1>>d2>>s2;
    t1=(int) d1/s1;
    t2=(int) d2/s2;
    if(dir == 0)
    {
        rel = t1 + t2;
    }
    else
    {
        rel = t1 - t2;
    }
    cout<<rel<<endl;
}