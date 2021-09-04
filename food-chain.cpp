#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int a,b;
	    cin >> a >> b;
	    int count =1;
	    while(a/b > 0){
	        count++;
	        a = a/b;
	    }
	    cout << count << endl;
	}
	return 0;
}