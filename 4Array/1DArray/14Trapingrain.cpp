#include<iostream>
#include<algorithm>
using namespace std;

void Rain(int arr[], int n) {
    if (n <= 0) return;

    int leftmax[n];
    int rightmax[n];
    int totalWater = 0;

    // Fill leftmax array
    leftmax[0] = arr[0];
    for (int i = 1; i < n; i++) {
        leftmax[i] = max(leftmax[i - 1], arr[i]);
    }

    // Fill rightmax array
    rightmax[n - 1] = arr[n - 1];
    for (int i = n - 2; i >= 0; i--) {
        rightmax[i] = max(rightmax[i + 1], arr[i]);
    }

    // Calculate total water trapped
    for (int i = 0; i < n; i++) {
        totalWater += min(leftmax[i], rightmax[i]) - arr[i];
    }

    cout << "Total water trapped: " << totalWater << endl;
}

int main() {
    int arr[] = {4, 2, 0, 6, 3, 2, 5};
    int size = sizeof(arr) / sizeof(int);
    Rain(arr, size);

    return 0;
}
