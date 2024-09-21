#include<iostream>
using namespace std;
 
 void change(int *a)
 {
    *a = 50;
    cout<<"Change value :"<<*a<<endl;
 }
 int main()
 {
    int a = 20;
    change(&a);
    cout<<"Orignal value :"<<a;
 }