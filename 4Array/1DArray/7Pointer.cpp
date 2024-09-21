#include<iostream>
using namespace std;

int main()
{
    int a = 0;
    int *ptr = &a;
    cout<<"ptr : "<<ptr<<endl;
     ptr = ptr + 1;
    cout<<"ptr + 1 : "<<ptr<<endl; //jump to 4 spaces because integer use 4 bits
    cout<<"ptr - 1 : "<<ptr-1<<endl; // 
    return 0;

}