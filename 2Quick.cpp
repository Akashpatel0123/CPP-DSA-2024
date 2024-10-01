//Quick sort
#include <iostream>
using namespace std;

int divide(int arr[] , int si , int ei)
{
    int i = si-1 ;
    int pivot = arr[ei];
    for(int j = si ; j<ei ; j++)
    {
        if(arr[j]<=pivot)
        {
            i++;
            swap(arr[i] , arr[j]);
        }
    } 
    i++;
    swap(arr[i] , arr[ei]);
    return i;
}

void print(int arr[] , int n)
{
    for(int i=0 ; i<n ; i++)
    {
        cout<<arr[i]<<" ";
    }
}

void quicksort(int arr[] , int si , int ei)
{ if(si>=ei)
{
    return;
}
    int pivot = divide(arr , si , ei);
    quicksort(arr , si , pivot-1); //left half
    quicksort(arr , pivot+1 , ei); //Right half
    
}

int main() {
    int arr[6] = {6 , 3 , 7 , 5 , 2 , 4};
    int n = 6;
    quicksort(arr , 0 , n-1);
    print(arr , n);
    return 0;
}