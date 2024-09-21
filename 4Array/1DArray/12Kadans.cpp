#include<iostream>
#include<climits>
using namespace std;
void kadans(int arr[] , int n)
{ 
 int sum = 0;
 int maximum = INT_MIN;
 for(int i = 0 ; i<n ; i++)
 {
  sum += arr[i];
  maximum = max(sum , maximum);
  if(sum<0)
  {
    sum = 0;
  }
 }
  cout<<maximum;
}

int main()
{
    //int array[6] = { 2 , -3 , 6 , -5 , 4 , 2 };
    int array[6] = { -4 , -2 , -3 , -6 , -7 , -1};
    int n = sizeof(array)/sizeof(int);
    kadans(array , n);

    return 0;
}