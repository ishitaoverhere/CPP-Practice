#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,k;
	    scanf("%d %d %d",&x,&y,&k);
	    if(x%k == 0 && y%k == 0)
	    {
	        printf("YES\n");
	    }
	    else
	    {
	    printf("NO\n");
	    }
    }
    return 0;
}