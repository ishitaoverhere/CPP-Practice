#include <iostream>
using namespace std;

class Teacher
{
    public:
    string college = "Chitkara University";
    public:
        Teacher()
        {
            cout << "Hello, I am teacher"<<endl;
        }
};

class ComputerTeacher : public Teacher
{   public:
    string subject = "Computer";
    string name = "Ishita";
    public:
        ComputerTeacher()
        {
            cout << "Hello, I am Computer teacher"<<endl;
        }
};

int main()
{
    ComputerTeacher obj;
    cout<<obj.name<<endl;
    cout<<obj.college<<endl;
    cout<<obj.subject<<endl;
    return 0;
}