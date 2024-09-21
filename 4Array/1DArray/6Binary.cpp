#include<iostream>
using namespace std;
//Function
int binary(int arr[] , int n  , int key)
{
  int low = 0 , high = n-1 , mid = (low+high)/2;
  //Loop
  while(low <= high)
{
    if(arr[mid] == key)
    {
        return mid;
    }

    else if(arr[mid] > key)
    {
        high = mid -1 ;
    }

     else
    {
      low = mid + 1;
    }
    mid = (low + high)/2;
}
return -1;
}

int main()
{
    int array[] = { 1  , 2 , 3 , 4 , 5 , 6 , 7 , 8 ,9 , 10};
    int n = sizeof(array)/sizeof(int);
    int key = 7;
    int result = binary(array , n , key);
    if (result == -1) {
        cout << "Element not found" << endl;
    }
    else{
        cout<<"Element found at : "<<result;
    }
    return 0;
}
