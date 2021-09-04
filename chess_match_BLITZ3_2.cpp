#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int n, a, b;
    for (int i=0; i<t; i++)
    {
        cin >> n >> a >> b;
        int total_time = 2*(180+n);
        int total_time_left = a+b;
        int duration_of_the_game = total_time - total_time_left;
        cout << duration_of_the_game << "\n";
    }
}