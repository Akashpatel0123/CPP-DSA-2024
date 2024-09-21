#include<iostream>
#include<climits> //to use INT_MIN = minimum value in -ve , INT_MAX = max value in +ve
using namespace std;

void sub(int arr[], int n) {
    int maximum = INT_MIN ;
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            int sum = 0; //reseting the value of sum
            for (int k = i; k <= j; k++) {
                sum += arr[k] ;
            }
            cout<<sum <<" " ;
              maximum = max(maximum , sum);
        }
        cout << endl;
    }
  cout<<"maximum : "<<maximum;
}

int main() {
    int arr[5] = {9, -6, 3, 5, -2};
    int n = sizeof(arr) / sizeof(int);
    sub(arr, n);
    return 0;
}