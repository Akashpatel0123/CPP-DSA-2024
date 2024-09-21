#include<iostream>
using namespace std;
int main()
{ int a = 10;
 int *ptr = &a;
 int **ptr2 = &ptr; 
 cout<<&a<<" = "<<ptr<<endl;
 cout<<sizeof(ptr)<<"  !=   "<<sizeof('a')<<endl;
 cout<<&ptr2<<" = "<<&ptr<<endl;
 cout<<*(&a)<<" = "<<*ptr;



    return 0;
}