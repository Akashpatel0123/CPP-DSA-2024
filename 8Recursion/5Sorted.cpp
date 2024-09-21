#include <iostream>
using namespace std;

bool sort(int arr[] , int n , int i)
{ 
  if(i == n-2)
  {
      return true;
  }
  if(arr[i]>arr[i+1])
  {
      return false;
  }
  return sort(arr , n , i+1);
}

int main()
{
    int arr[5] = { 1 , 9 , 3 , 4 , 5};
    int n = 5;
    cout<<sort(arr , n , 0);
    return 0;
}