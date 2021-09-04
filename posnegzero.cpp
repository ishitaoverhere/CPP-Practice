#include <iostream>
using namespace std;

int main ()
{
    int num;
    int cin >> num;
    if (num == 0) {
        cout << num << " is zero. \n";
    }
    else if ( num > 0 ) {
        cout << num << " is positive. \n";
    }
    else {
        cout << num << " is negative. \n";
    }
}