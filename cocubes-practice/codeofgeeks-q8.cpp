#include <iostream>
using namespace std;

int main()
{
    int num;
    cin>>num;
    int rem=0, ans;
    while(num)
    {
        rem=num%2;
        ans=(ans*10)+rem;
        num=num/2;
    }
    cout<<ans;
}