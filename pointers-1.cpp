#include <iostream>
using namespace std;

int main()
{
    int a = 1, b = 2, *a_point, *b_point;
    a_point = &a;
    b_point = &b;
    cout<<"Value of a: "<<*a_point<<endl;
    cout<<"Address of a: "<<a_point<<endl;
    cout<<&a<<endl;
    cout<<"Value of b: "<<*b_point<<endl;
    cout<<"Address of b: "<<b_point<<endl;
    cout<<&b<<endl;

    return 0;
}