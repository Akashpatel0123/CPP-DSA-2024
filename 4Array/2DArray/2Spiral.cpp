#include<iostream>
using namespace std;

void spiralmatrix(int mat[][4], int n, int m)
{
    int srow = 0, erow = n - 1;
    int scol = 0, ecol = m - 1;

    while(srow <= erow && scol <= ecol)
    {
        // TOP
        for(int j = scol; j <= ecol; j++)
        {
            cout << mat[srow][j] << " ";
        }

        // RIGHT
        for(int i = srow+1; i <= erow; i++)
        {
            cout << mat[i][ecol] << " ";
        }

        // BOTTOM
  
            for(int j = ecol-1; j >= scol; j--)
            {
              if(srow == erow)
        {
          break;
        }
                cout << mat[erow][j] << " ";
            }

        // LEFT
            for(int i = erow-1; i > srow; i--)
            {
              if(scol == ecol)
        {
          break;
        }
                cout << mat[i][scol] << " ";
            }
  srow++ , erow--;
  scol++ , ecol--;
    }
}

int main()
{
    int array[3][4] = { 
        { 1, 2, 3, 4 },
        { 10, 11, 12, 5 },
        { 9, 8 , 7, 6 }
    };

    int n = 3, m = 4;
    spiralmatrix(array, n, m);

    return 0;
}
