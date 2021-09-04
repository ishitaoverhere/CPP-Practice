#include <iostream>
using namespace std;

int main()
{
    char a;
    cin >> a;
    switch (a) {
        case 'a':
            cout << "A";
            break;
        case 'b':
            cout << "B";
            break;
        case 'c':
            cout << "C";
            break;
        default:
            cout << "Not a char";

    }
}