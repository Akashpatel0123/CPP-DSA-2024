#include<iostream>
using namespace std;

void bit(int n , int i)
{
  int mask = 1 << i;
  if((n & mask)>1) 
  {
    cout<<"1";
  }
  else {  

    cout<<"0";
  }
}

int main()
{
    int a , b;
    cout<<"Enter a number :";
    cin>>a;
    cout<<"Enter the Position :";
    cin>>b;
    bit(a , b);
    return 0;
}