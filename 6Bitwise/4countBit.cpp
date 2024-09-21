//Count Binary Digit
#include<iostream>
using namespace std;
int count(int num)
{
 int coun = 0;
 while(num > 0)
 {
    int lastdigit = num & 1 ;
    coun += lastdigit;
    num = num >> 1;
 }
 cout<<coun;
 return coun;
}
int main()
{
int a;
cout<<"Enter a number :";
cin>>a;
count(a);
return 0;
}
