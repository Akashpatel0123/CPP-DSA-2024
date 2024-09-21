#include<iostream>
using namespace std;

void transpose(int mat[][5], int n, int m)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < m; j++)
        {
            swap(mat[i][j], mat[j][i]);
        }
    }
    
    // Display the transposed matrix
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int arr[3][5] = { { 1 ,  2 ,  3 ,  4 , 5 }, 
                      { 6 ,  7 ,  8 ,  9 , 10},
                      {11 , 12 , 13 , 14 , 15}};
    int n = 3, m = 5;
    transpose(arr, n, m);
    return 0;
}
