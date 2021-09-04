#include <iostream>
using namespace std;

int main()
{
    int r, o, c;
    cin >> r >> o >> c;
    int remaining_overs = 20-o;
    int remaining_runs = r-c;
    int can_score = (remaining_overs*6*6);
    if(can_score>remaining_runs)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
}