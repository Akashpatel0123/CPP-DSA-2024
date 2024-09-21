#include<iostream>
#include<climits>
using namespace std;

int stock( int arr[] , int n)
{
  int buy[100000];
  buy[0]=INT_MAX;
  for(int i=1 ; i<n ; i++)
  {
    buy[i] = min(buy[i-1] , arr[i-1]) ;
    
  }
 int profit = 0;
 for(int i=0 ; i<n ; i++)
 {
  int prof = arr[i] - buy[i];
  profit = max(profit , prof);
 }
return profit;

}

 int main()  
{
   int array[] = { 7 , 1 , 5, 3 , 6 , 4};
   int n = sizeof(array)/sizeof(int);
   cout<<"Max Profit = : "<<stock( array , n);

    return 0 ;
}