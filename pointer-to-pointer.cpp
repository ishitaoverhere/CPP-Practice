#include <iostream>
using namespace std;

int main()
{
    int a = 1, *a_point, **b_point;
    a_point = &a;
    b_point = &a_point;
    cout<<a<<endl;
    cout<<*a_point<<endl;
    cout<<*b_point<<endl; //points to the value of pointer a_point which is address of a 
    cout<<**b_point<<endl;

    cout<<&a<<endl; //address of a
    cout<<a_point<<endl; //address of a
    cout<<b_point<<endl; //address of a_point
    cout<<&b_point<<endl; //address of b_point

    return 0;
}