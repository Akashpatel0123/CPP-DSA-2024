#include<iostream>
//bool repeat = false;
using namespace std;

bool function(int arr[] , int n)
{
 for(int i=0 ; i<n ; i++)
 {
    for(int j=i+1 ; j<n ; j++)
    {
        if(arr[i]==arr[j])
        {
           return true;
        }
    }
 }
 return false;

}

int main()
{
    //int array[] = {1 , 2 , 3 , 4};
    int array[] = {1 , 2 , 3 , 1};
    int size = sizeof(array)/sizeof(int);
    cout<<function(array , size);

    return 0;
}