#include<iostream>
using namespace std;

int bubblesort(int arr[] , int n)
{
  for(int i=0 ; i<n-1 ; i++)
  {
    for(int j=0 ; j<n-i-1 ; j++)
    {
        if(arr[j] > arr[j+1])
        {
        swap(arr[j] , arr[j+1]);
        }
    }
  }
  for(int i=0 ; i<n ; i++)
  {
    cout<<arr[i]<<" ";
  }
}

int main()
{
    int array[] = {5 , 6 , 2 , 9 , 1 , 3 , 7, 2};
    int size = sizeof(array)/sizeof(int);
    bubblesort(array , size);

    return 0;
}