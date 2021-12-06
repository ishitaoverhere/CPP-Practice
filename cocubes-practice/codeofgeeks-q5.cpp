#include <iostream>
using namespace std;
bool checkGCD(int n1, int n2)
{
    int hcf;
    if ( n2 > n1) {   
    int temp = n2;
    n2 = n1;
    n1 = temp;
  }
    
  for (int i = 1; i <=  n2; ++i) {
    if (n1 % i == 0 && n2 % i ==0) {
      hcf = i;
    }
  }

  if(hcf==1) return true;
  else return false;
}
int main()
{
    int t;
    cin>>t;
    int a[t];
    int count=0;
    for(int i=0; i<t; i++)
    {
        cin>>a[i];
    }
    
    for (int i = 0; i < t - 1; i++)
        for (int j = i + 1; j < t; j++)
            if (checkGCD(a[i], a[j]))
                count++;

    cout<<count;
}