#include <iostream>
using namespace std;

class EncapsulationEx
{
 private:
int x;

//setter function
public:
 void set(int a)   // return tyope always void
{
 x= a;
}

// getter
public:
 int get()      // return type will always be same as datatype of the variable
{
return x;
}  


};

int main()
{
EncapsulationEx  object;
object.set(10);
cout<<object.get();
return 0;


}