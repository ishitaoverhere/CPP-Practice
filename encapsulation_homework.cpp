//WAP to input and display name and age of student using encapsulation

#include <iostream>
using namespace std;

class EncapsulationEx {
    int age;
    string name;

    public:
    int getAge() const {
        return age;
    }
    string getName() const {
        return name;
    }

    void setAge(int age) {
        this->age = age;
    }
    void setName(string name) {
        this->name = name;
    }
};

int main() {
    EncapsulationEx obj;
    int a;
    string n;
    cout<<"Enter age:"<<endl;
    cin>>a;
    cout<<"Enter name:"<<endl;
    cin>>n;
    obj.setAge(a);
    obj.setName(n);
    cout<<obj.getAge()<<endl;
    cout<<obj.getName()<<endl;
    return 0;
}