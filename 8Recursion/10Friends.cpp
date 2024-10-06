/*Friends Pairing Problem
Find total ways in which n friends can be paired up.
Each friend can only be paired once.8*/
#include <iostream>
using namespace std;

int friendspairing(int n) 
{
    // Base cases
    if (n == 1 || n == 2) {
        return n;
    }

    // Recursive relation: either the friend stays single or pairs with another
    return friendspairing(n - 1) + (n - 1) * friendspairing(n - 2);
}

int main() 
{
    int n = 3;  // You can change the value of n as needed
    cout << "Total ways to pair " << n << " friends: " << friendspairing(n) << endl;
    return 0;
}
