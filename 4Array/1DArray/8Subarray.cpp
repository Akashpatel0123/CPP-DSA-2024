#include<iostream>
using namespace std;

void sub(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        
        for (int j = i; j < n; j++) {
        
            for (int k = i; k <= j; k++) {  // Print subarray from arr[i] to arr[j]
                cout << arr[k] << " ";
            }
            cout << ", ";
        }
        cout << endl;
    }
}

int main() {
    int arr[5] = {9, 6, 3, 5, 2};
    int n = sizeof(arr) / sizeof(int);
    sub(arr, n);
    return 0;
}
