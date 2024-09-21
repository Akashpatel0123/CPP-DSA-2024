#include<iostream>
using namespace std;

 void dec(int decimal)
{  int pow=1 ;
   int binary = 0;
   int lastdigit ;
  while(decimal>0)
  {
   lastdigit = decimal % 2;
   binary += lastdigit * pow;
   pow *= 10;
   decimal /= 2;
  }
  cout<<"The Binary number is : "<<binary;
}
int main()
{
    int decimal;
    cout<<"Enter a number :";
    cin>>decimal;
    dec(decimal);
    return 0;
}