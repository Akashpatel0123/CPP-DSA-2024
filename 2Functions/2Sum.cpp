#include<iostream>
using namespace std;
 int sum(int a , int b);
 int sub(int a , int b=1 );
 int main()
 {
    int add = sum(5,6); //(Arguments)
     int minus = sub(5);
    cout<<"Sum is = "<<add<<endl;
    cout<<"Sub is = "<<minus<<endl;
    return 0;
 }

 int sum(int a , int b) //(Parameters)
 {
    return a+b ;
 }

 int sub(int a , int b ) // (Parameters)
 {
    return a-b;
 }