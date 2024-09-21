#include<iostream>
using namespace std;
void seven(int mat[][5] , int n , int m)
{
  int num = 0;
  for(int i=0 ; i<n ; i++)
  {
    for(int j=0 ; j<m ; j++)
    {
        if(mat[i][j]==7)
        {
            num++;
        }
    }
  }
  cout<<"The number of all 7’s that are in the 2d array is :"<<num;
}

int main()
{
    int arr[5][5] = { { 1 ,  2 , 3  , 5  , 5 }, 
                      { 6 ,  7 , 8  , 9  , 10},
                      {11 , 12 , 7 , 14 , 15},
                      {16 , 17 , 18 , 19 , 7},
                      {21 , 22 , 7 , 24 , 25}};
    int n = 5 , m = 5;
 seven(arr , n , m);
 return 0;
}