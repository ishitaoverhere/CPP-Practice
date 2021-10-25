#include <iostream>
using namespace std;

void checkPrime(int start, int end)
{
    bool prime = true;
    int i;
    while (start < end) {
    prime = true;
        if (start == 0 || end == 1) {
            prime = false;
        }
        else {
            for (i = 2; i <= start / 2; ++i) {
                if (start % i == 0) {
                    prime = false;
                    break;
                }
            }
        }
        
        if (prime)
            cout << start << " ";

        ++start;
    }
}

int main() {
    int start, end, i;
    bool prime = true;

    cout << "Enter the two intervals : ";
    cin >> start >> end;
    checkPrime(start, end);
    
    return 0;
}
