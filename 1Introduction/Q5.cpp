/*Print the sum of digits of a number using while loop.
EX - n=10829 */
#include<iostream>
using namespace std;
int main()
{ int num ,sum=0;
 cout<<"Enter the number : ";
 cin>>num; 

while(num>=1)
{
     sum += num % 10;
     num /= 10;
}
 cout<<"Sum is = "<<sum;
 return 0;
}