#include <iostream>
using namespace std;

int main()
{
    void func(int &, const int &);
    int i=10, j=20;
    cout << i << j <<endl;
    func(i,j);
    cout << i << j <<endl;
}

void func(int &x, const int &y)
{
    x=30, y;
    cout << x << y <<endl;
}