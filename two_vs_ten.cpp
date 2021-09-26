#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
        while(t--){
            int n;
            cin>>n;
            
            if(n%10==0)
            {
                cout<<0<<endl;
            }
            else
            {
            cout<<(((2*n)%10==0) ? 1 : -1)<<endl;
            }
        }
	return 0;
}
