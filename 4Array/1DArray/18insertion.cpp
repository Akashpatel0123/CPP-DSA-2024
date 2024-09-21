#include<iostream>
using namespace std;
void insertion(int arr[] , int n)
{
  for(int i=0 ;i<n ; i++)
  { int j = i;
    while(j>0 && arr[j-1]>arr[j])
    {
      swap(arr[j] , arr[j-1]);
        j--;
   }
  }
   for(int i=0 ; i<n ; i++)
   {
     cout<<arr[i]<<" ";
   }
 }

int main()
{
    int array[] = { 7 , 5 , 6 , 3 , 1};
    int size = sizeof(array)/sizeof(int);
    insertion(array , size);

    return 0;
}