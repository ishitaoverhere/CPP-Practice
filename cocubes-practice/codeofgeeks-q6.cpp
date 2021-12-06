#include <iostream>
using namespace std;
int FindSecondLargestNumber(int a, int b, int c)
{
    if((a>b && a<c) || (a>c && a<b)) return a;
    else if((b>a && b<c) || (b<a && b>c)) return b;
    else if((c>a && c<b) || (c<a && c>b)) return c;

    return -1;
}
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int ans = FindSecondLargestNumber(a,b,c);
    cout<<ans;
}