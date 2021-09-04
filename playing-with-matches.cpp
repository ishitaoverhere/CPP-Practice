#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int a, b;
    while(t--)
    {
        cin >> a >> b;
        int sum = a+b;
        int rem=0, new_sum=0;
        while(sum!=0)
        {
            rem=sum%10;
            if(rem==0)
            {
                new_sum = new_sum + 6;
            }
            else if(rem==1)
            {
                new_sum = new_sum + 2;
            }
            else if(rem==2)
            {
                new_sum = new_sum + 5;
            }
            else if(rem==3)
            {
                new_sum = new_sum + 5;
            }
            else if(rem==4)
            {
                new_sum = new_sum + 4;
            }
            else if(rem==5)
            {
                new_sum = new_sum + 5;
            }
            else if(rem==6)
            {
                new_sum = new_sum + 6;
            }
            else if(rem==7)
            {
                new_sum = new_sum + 3;
            }
            else if(rem==8)
            {
                new_sum = new_sum + 7;
            }
            else if(rem==9)
            {
                new_sum = new_sum + 6;
            }
            sum/=10;
        }
        cout << new_sum << "\n";
    }
}