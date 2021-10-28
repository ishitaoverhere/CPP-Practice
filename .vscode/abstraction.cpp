#include <iostream>
using namespace std;

class AbstractionEx
{
    private:
    int a, b;

    public:
    void set(int x, int y)
    {
        a = x;
        b = y;
    }

    public:
    void output()
    {
        cout<<"a = "<<a<<endl;
        cout<<"b = "<<b<<endl;
    }
};

int main()
{
    AbstractionEx obj;
    obj.set(10,20);
    obj.output();
    return 0;
}