#include <iostream>
#include <algorithm> // for std::sort
using namespace std;

void print(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[9] = { 9, 8, 7, 6, 5, 4, 3, 2, 1 };
    sort(arr, arr + 9); // Corrected: arr + 9 to sort the entire array
    print(arr, 9); // Corrected: print the entire array
    sort(arr , arr+9 , greater<int>());
    print(arr , 9);

    return 0;
}
