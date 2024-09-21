#include<iostream>
using namespace std;

void evenOdd(int a)
{
  if(!(a & 1))
  {
    cout<<"It is a Even Number";
  }
  else {
    cout<<"It is a Odd Number ";
  }
}

int main()
{
     int a ;
     cout<<"Enter a number : ";
     cin>>a;
    evenOdd(a);
     return 0;
}
