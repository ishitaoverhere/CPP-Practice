#include <iostream>
using namespace std;

int checkDivisibility(int n, int a, int b, int k)
{
    int start=0;
    int flag=0;
    while(start<=n)
    {
        if(start%a==0 && start%b!=0)
        {
            flag++;
        }
        else if(start%b==0 && start%a!=0)
        {
            flag++;
        }
        start++;
    }
    if(flag>=k)
    {
        return 1;
    }
    else 
    {
        return 0;
    }
}

int main()
{
    int tests;
    for (int i = 0; i < tests; i++)
    {
        int num, first, second, problems;
        cin >> num >> first >> second >> problems;
        int ans = checkDivisibility(num, first, second, problems);
        if(ans==1)
        {
            cout << "Win\n";
        }
        else
        {
            cout << "Lose\n";
        }
    }
    
}