#include <iostream>
using namespace std;

int main()
{
    cout << "Enter the amount of units consumed: (in KWh)\n";
    int units, t_bill;
    cin >> units;
    if (units <= 100)
    {
        t_bill = (units * 10);
    }
    else if (units <= 200)
    {
        t_bill = (100*10) + ((units-100)*15);
    }
    else if (units <= 300)
    {
        t_bill = (100*10) + (100*15) + ((units-200)*20);
    }
    else if (units > 300)
    {
        t_bill = (100*10) + (100*15) + (100*20) + ((units-300)*25);
    }
    else 
    {
        cout << "Wrong Input";
    }
    cout << t_bill << " is your total bill.";
}