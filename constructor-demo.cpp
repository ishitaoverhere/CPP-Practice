#include <iostream>
using namespace std;

class ConstructorDemo
{
    public:
    int num=10;
    char ch;

    ConstructorDemo()
    {
        num = 100;
        ch = 'M';
    }
};

int main()
{
    ConstructorDemo obj;
    cout<<obj.num;
}