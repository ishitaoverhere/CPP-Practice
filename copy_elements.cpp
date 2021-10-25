#include<iostream>
using namespace std;

int main() {

    int arr1[10], arr2[10], i, n;

    cout << "Enter size of an array:";
    cin>>n;

    cout << "Enter array elements:";
    for (i = 0; i < n; i++) {
        cin >> arr1[i];
    }

    for (i = 0; i < n; i++) {
        arr2[i] = arr1[i];
    }
    cout << "Copied array is:";
    for (i = 0; i < n; i++) {
        cout << arr2[i] << " ";
    }

    return 0;
}