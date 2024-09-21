//Check if a number is prime or not.
#include<iostream>
#include<cmath>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    
    bool isPrime = true; // Assume the number is prime initially
    
    for (int i = 2; i <sqrt(num) / 2; i++) {
        if (num % i == 0) {
            isPrime = false; // If a divisor is found, mark the number as non-prime
            break;
        }
    }
    
    if (isPrime || num > 1) {
        cout << "It is a Prime number." << endl;
    } else {
        cout << "It is a Non-prime number!" << endl;
    }
    
    return 0;
}
