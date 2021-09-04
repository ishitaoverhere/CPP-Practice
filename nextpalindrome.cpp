#include <iostream>
using namespace std;

int checkPalindrome(int n)
{
    int r, sum=0, flag;
    flag=n;
    while(n>0)
    {
        r=n%10;
        sum=(sum*10)+r;
        n=n/10;
    }
    if(flag==sum)
    {
        return sum;
    }
    else
    {
        return 0;
    }
}


int main()
{
    int tests;
    cin >> tests;
    for(int i=0; i<tests; i++)
    {
        int num;
        cin >> num;
        int temp = (num+1);
        while (temp>0)
        {
            int found = checkPalindrome(temp);
            if(found!=0)
            {
                cout << found;
                break;
            }
            else
            {
                temp++;
            }
        }
    }
}