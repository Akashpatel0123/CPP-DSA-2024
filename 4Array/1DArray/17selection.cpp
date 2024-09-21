#include<iostream>
#include<climits>
using namespace std;

void selection(int arr[] , int n)
{  
  for(int i = 0 ; i<n-1 ; i++)
  { int mini = i;
    for(int j=i+1 ; j<n ; j++)
    {
      if(arr[j]<arr[mini])
      {
       mini = j;
      }
    }
    swap(arr[i] , arr[mini]);
  }
   for(int i=0 ; i<n ; i++)
   {
     cout<<arr[i]<<" ";
   }

}
int main()
{
    int array[] = {17 , 5 , 16 , 13 , 9};
    int size = sizeof(array)/sizeof(int);
    selection(array , size);

    return 0;
}