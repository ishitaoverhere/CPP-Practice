#include <iostream>
#include <string>
using namespace std;

int volume( int l=10, int b=10, int h=10 );
double volume( double l=20.0, double b=20.0, double h=20.0 );

int main()
{
    int l, b, h, result;
    double ln, br, hg, rest;
    string decision;
    cout << "Int or double? : ";
    cin >> decision;
    if( decision == "int" || decision == "Int" )
    {
        result = volume(5);
        cout << result;
    }
    else if( decision == "double" || decision == "Double" )
    {
        rest = volume(50.0);
        cout << rest;
    }
}

int volume( int l, int b, int h )
{
    int answer = l*b*h;
    return answer;
}
double volume( double l, double b, double h )
{
    double answer = l*b*h;
    return answer;
}
