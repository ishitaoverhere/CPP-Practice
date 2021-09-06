#include <iostream>
using namespace std;
const int a=5;

void count()
{
    static int i=0;
    i=i+1;
    cout << a << endl;
    cout << i <<endl;
}

int main()
{
    count();
    count();
    count();
    return 0;
}