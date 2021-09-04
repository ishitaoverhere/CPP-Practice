#include <iostream>
#include <string>
using namespace std;

void sum(int number, int times=5);

int main()
{
    int n, t;
    string decision;
    cout << "Enter number: ";
    cin >> n;
    cout << "Do you wish to enter the number of times this number is to added? : ";
    cin >> decision;
    if(decision == "Y" || decision == "Yes" || decision == "yes" || decision == "y")
    {
        cin >> t;
        sum(n, t);
    }
    else
    {
        sum(n);
    }

}

void sum(int number, int times)
{
    int answer;
    for(int i=0; i<times; i++)
    {
        answer = answer+number;
    }
    cout << answer;
}