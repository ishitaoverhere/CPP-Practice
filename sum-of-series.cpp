#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int x, n;
    cout << "Enter x: ";
    cin >> x;
    cout << "Enter n: ";
    cin >> n;  
    int sum=1;
    //n-1 terms left
    int k = 2*(n-1); //powers
    for(int i=2; i<=k; i=i+2)
    {
        sum=sum+pow(x, i);
    }
    cout << sum;
}