//Print the sum of odd digits of a number using while loop. Ex=10829
#include<iostream>
using namespace std;
int main()
{
    int num , odd , sum=0 ;
    cout<<"Enter a number : ";
    cin>>num;

    while(num>=1)
    {
      odd = num % 10;
      if(odd % 2 != 0)
      {
         sum += odd;
      }
      num = num / 10;
    }
 cout<<"Sum odd numbers is = "<<sum;
return 0;
}