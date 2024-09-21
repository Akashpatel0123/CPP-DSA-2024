#include<iostream>
using namespace std;

bool staircase(int mat[][4] , int n , int m , int key)
{    int row = 0 , col = m-1;
     while(row<n && col>=0)
 {
     if(key == mat[row][col])
     {
        cout<<row<<","<<col<<endl;
        return true;
     }
     else if(key < mat[row][col])
     {
      col--;
     }
     else {row++;}  
 }
 cout<<"Key not found !";
 return false;

}
int main() {
    int mat[4][4] = { {10, 20, 30, 40},
                      {15, 25, 35, 45},
                      {27, 29, 37, 48},
                      {32, 33, 39, 50} };
    int n = 4, m = 4;
    int key = 50;
    staircase(mat , n , m , key);
   return 0;
}

 
