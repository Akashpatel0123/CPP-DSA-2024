#include<iostream>
using namespace std;
void reverse(char str[] , int n)
{
    for(int i=0; i<n/2 ; i++)
    {
        swap(str[i] , str[n-i-1]);
    }
  for(int i=0 ; i<n ; i++)
  {
    cout<<str[i];
  }
}

int main()
{
    char ch[] = "CODER";
    int n = 5;
    reverse(ch ,n);

    return 0;
}