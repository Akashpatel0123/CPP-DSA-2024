//WAF to print if a number is odd or even.
#include<iostream>
using namespace std;
void num(int a)
{
    if(a % 2 == 0)
    {
        cout<<"It is even number ."<<endl;
    }
    else
    {
        cout<<"It is a odd number ."<<endl;
    }
}
int main()
{
    int n;
    cout<<"Enter the numnber :"<<endl;
    cin>>n;
    num(n);
    return 0;
}