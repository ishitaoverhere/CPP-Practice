#include <iostream>

using namespace std;

int main ()
{
   int j = 0, i = 10;
   j = i++;
   cout << j << ", " << i << "\n";
   return 0;
}