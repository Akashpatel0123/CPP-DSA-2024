//WAP to find the Factorial of a number entered by the user.
#include<iostream>
using namespace std;
int main()
{ int num , factorial=1;
    cout<<"Enter a number :";
    cin>>num;

for(int i=num ; i>=1 ; i--)
{
    factorial *= i ;
}
cout<<"The factorial of the number is = "<<factorial<<endl;
return 0;
}