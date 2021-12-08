#include <iostream>
using namespace std;
int checkPrime(int num)
{
    int divisors=0;
    for(int i=1; i<=num; i++)
    {
        if(num%i==0)
            divisors++;
    }
    if(divisors<=2) return 1;
    else return 0;
}

int main()
{
    int num, i;
    cin>>num;
    for(i=2; i<=(num/2); i++)
    {
        if(checkPrime(i)==1)
        {
            if(checkPrime(num-i))
            {
                cout<<"Yes "<<num<<" can be expressed as sum of "<<i<<" and "<<(num-i)<<endl;
            }
        }
    }
    return 0;
}