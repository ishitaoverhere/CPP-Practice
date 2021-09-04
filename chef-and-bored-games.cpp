#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    while (n--)
    {
        int a,count=0;
        cin>>a;
        for (int i = 1; i <= a; i= i+2)
        {
            count+=(a-i+1)*(a-i+1);
        }
        cout<<count<<endl;
    }

    return 0;
}