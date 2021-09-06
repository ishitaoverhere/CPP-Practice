#include <iostream>
using namespace std;

int main()
{
    int i = 10;
    int &j = i;
    cout << i <<endl;
    cout << j <<endl;
    j = 20;
    cout << j <<endl;
    cout << i <<endl;
}