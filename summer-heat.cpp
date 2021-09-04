#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int xa, xb, a, b;
    for(int i=0; i<t; i++)
    {
        cin >> xa >> xb >> a >> b;
        int a_amt = a/xa;
        int b_amt = b/xb;
        cout << (a_amt + b_amt) << "\n";
    }
}