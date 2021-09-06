#include <iostream>
using namespace std;

int main()
{
    int a, b;
    void swap(int *,int *);
    cout << "Enter two numbers: " << endl;
    cin >> a >> b;
    cout << "Before calling function value inside main a= " << a << " b= " << b <<endl;
    swap(&a,&b);
    cout << "After calling function value inside main a= "<< a << " b= " << b <<endl;
    return 0;
}

void swap(int *x, int *y)
{
    int z;
    z = *x;
    *x = *y;
    *y = z;
    cout << "After modification x= "<< *x << " y= " << *y <<endl;
}