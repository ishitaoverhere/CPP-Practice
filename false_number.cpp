#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int dupli_n = n;
        int count_dig = 0;
        while(dupli_n != 0)
        {
            dupli_n = dupli_n / 10;
            ++count_dig;
        }
        int ten_pow = pow(10, count_dig);
        int answer = ten_pow + n;
        cout << answer <<endl;
    }
}