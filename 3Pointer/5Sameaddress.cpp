#include<iostream>
using namespace std;
int main()
{
    int a = 10 ;
    int &b = a ; //initialization must
    b = 25;
    cout<<&a<< " = "<<&b<<"="<<b;
    return 0 ;
}