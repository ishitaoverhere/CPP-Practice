#include <iostream>
using namespace std;

int main()
{
    int *p;
    int a[5] = {1,2,3,4,5};
    p=a;
    for(int i=0; i<=4; i++)
    {
        cout<<*p<<endl;
        p++;
    }
    return 0;
}