#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, x, p;
        cin>>n>>x>>p;
        int correct_marks = x*3;
        int incorrect_marks = (n-x)*(-1);
        int total_marks = correct_marks+incorrect_marks;
        if(total_marks>=p)
        {
            cout<<"PASS\n";
        }
        else
        {
            cout<<"FAIL\n";
        }
    }
}