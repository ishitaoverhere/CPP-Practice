#include <iostream>
using namespace std;

int sum( int x ){
      int first;
      first = x;
      while( first >= 10 )
      {
            first = first / 10;
      }
      int last;
      last = x % 10;
      int add = first + last;
      return add;
}

int main() {
      int t, n;
      cout << "Enter number of test cases: \n";
      cin >> t;
      for(int i = 0; i < t; i++)
      {
            cout << "Enter a number: \n";
            cin >> n;
            cout << sum(n);
      }
	// your code goes here
	return 0;
}
