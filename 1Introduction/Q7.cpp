/*Print the digits of a given number in reverse using while loop.
n = 10829 */
#include<iostream>
using namespace std;
int main ()
{
    int num , reverse;
    cout<<"Enter a number : ";
    cin>>num;

    while(num>=1)
    {
      reverse = num % 10;
      cout<<reverse;
      num = num/10;     
    }

return 0;
}