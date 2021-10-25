#include <iostream>
using namespace std;

int main() {
    int start, end, i;
    bool prime = true;

    cout << "Enter the two intervals : ";
    cin >> start >> end;
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

    return 0;
}
