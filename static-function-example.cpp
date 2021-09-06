#include <iostream>
using namespace std;

void func();
const void fun1();

void func()
{
    cout << "Hello";
    fun1();
}

const void  fun1()
{
    func();
}

int main()
{
    func();
}