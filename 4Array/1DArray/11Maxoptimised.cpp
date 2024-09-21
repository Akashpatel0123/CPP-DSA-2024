#include<iostream>
#include<climits> //to use INT_MIN = minimum value in -ve , INT_MAX = max value in +ve
using namespace std;

void sub(int arr[], int n) {
    int maximum = INT_MIN ;
    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = i; j < n; j++)
       {
            sum += arr[j];
            
              maximum = max(maximum , sum);
        }
    }
  cout<<"maximum : "<<maximum;
}

int main() {
    int arr[6] = {2, -3, 6, -5, 4 , 2};
    int n = sizeof(arr) / sizeof(int);
    sub(arr, n);
    return 0;
}