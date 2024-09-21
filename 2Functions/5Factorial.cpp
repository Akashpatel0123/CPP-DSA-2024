#include<iostream>
using namespace std;
int fact(int n)
{
    int into = 1;
    for(int i=n ; i>=1 ; i--)
    {
     into *= i;
    }
     return into;
}
    int main()
    { int n;
    cout<<"Enter a number :";
    cin>>n; 
    cout<<fact(n);
        return 0;
    }