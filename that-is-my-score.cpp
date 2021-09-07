#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int sc[11]={0},i,p,s;
	    for(i=0;i<n;i++)
	    {
	        cin>>p>>s;
	        if(s>sc[p-1])
	        sc[p-1]=s;
	    }
	    int score=0;
	    for(i=0;i<8;i++)
	    score+=sc[i];
	    cout<<score<<endl;
	}
	return 0;
}