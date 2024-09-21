#include <iostream>
using namespace std;

bool armstrong(int n) {
    int num = n; // Store the original number
    int digitCount = 0;
    int digit;
    int digitSum = 0;

    // Count the number of digits
    while (num != 0) {
        num /= 10;
        digitCount++;
    }

    // Calculate the sum of cubes of digits
    num = n; // Reset num to the original value
    while (num != 0) {
        digit = num % 10;
        int cube = 1;
        for (int i = 0; i < digitCount; i++) {
            cube *= digit;
        }
        digitSum += cube;
        num /= 10;
    }

    return digitSum == n;
}

int main() {
    int a;
    cout << "Enter a number: ";
    cin >> a;
    if (armstrong(a)) {
        cout << "It is an Armstrong number." << endl;
    } else {
        cout << "It is not an Armstrong number." << endl;
    }

    return 0;
}
