#include<iostream>
using namespace std;
void change(int a)
{
    a = 50;
    cout<<"Change value is :"<<a<<endl;
}
int main()
{
    int a = 25;
    change(a);
    cout<<"Original value :"<<a;
    return 0 ;
}