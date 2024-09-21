//Reverse a given number & print the result. 20891
#include<iostream>
using namespace std;
int main()
{ int num , reverse=0 ,lastdigit;
    cout<<"Enter a number :";
    cin>>num;

    while(num>=1)
    {   
        lastdigit = num % 10;
        reverse=(reverse*10)+lastdigit;
        num=num/10;
    }
    cout<<"Reverse is = "<<reverse;

    return 0;
}