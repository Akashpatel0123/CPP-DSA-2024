#include<iostream>
using namespace std;

void sum(int mat[][5] , int n , int m)
{
 int add = 0;
 for(int i = 1 ; i<2 ; i++)
 {
    for(int j=0 ; j<n ; j++)
    {
        add += mat[i][j];
    }
 }
 cout<<add;
}

int main()
{
    int arr[5][5] = { { 1 ,  2 , 3  , 5  , 5 }, 
                      { 6 ,  7 , 8  , 9  , 10},
                      {1 , 2 , 3 , 4 , 5},
                      {16 , 17 , 18 , 19 , 7},
                      {21 , 22 , 7 , 24 , 25}};
    int n = 5 , m = 5;
 sum(arr , n , m);
 return 0;
}