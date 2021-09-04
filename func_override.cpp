#include <iostream>
using namespace std;
//global variables can be declared in languages uptil cpp
class BaseClass
{
    public: 
    void disp()
    {
        cout << "function of parent class";
    }
};

class DerivedClass : public BaseClass
{
    public:
    void disp() 
    {
        cout << "function of the child class";
    }
};

int main()
{
    BaseClass obj = BaseClass(); // classname objectname = classname();

    obj.disp();
    return 0;
}