#include<iostream>
using namespace std;

void diagonal(int mat[][3] , int n , int m)
{ int sum = 0;

    for(int i=0 ; i<n ; i++)
    {
        sum += mat[i][i];
        if(i != m-i-1)
        {
            sum += mat[i][m-i-1];
        }
         
    }
    cout<<sum;
}

int main()
{
  int arr[3][3] = { { 1 , 2  , 3 },
                    { 5 , 6  , 7 }, 
                    { 9 , 10 , 11} };
  int n = 3 , m = 3;

  diagonal(arr , n , m );

  return 0;
}