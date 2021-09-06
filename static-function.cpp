#include <iostream>
#include <string>
using namespace std;

class OnePlus {
    private:
        static string phone_name;
    
    public:
        static void name()
        {
            cout << "Phone name is: " << phone_name;
        }
        static void set_name(string name)
        {
            phone_name = name;
        }
};
//initialize static variable
string OnePlus::phone_name = "";

int main()
{
    //initialize static function
    OnePlus::set_name("OnePlus 8T");
    OnePlus::name();
    return 0;
}