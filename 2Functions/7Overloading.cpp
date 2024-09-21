#include<iostream>
using namespace std;
 
 int sum(int a , int b)
 {  
    return a+b;
 }

 double sum(double a , double b)
 {
    return a+b;
 }

 int sum(int a , int b , int c)
 {
    return a+b+c;
 }

 int main()
 {
    cout<<sum(5 , 6)<<endl;
    cout<<sum(5.5 , 6.5)<<endl;
    cout<<sum(5 , 6 , 7);
return 0;
 }