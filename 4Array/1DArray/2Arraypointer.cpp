#include<iostream>
using namespace std;
int main()
{
    int a = 10;
    int b;
    int *ptr = &a ;
    cout<<"ptr :"<<ptr<<endl;
    cout<<"*ptr :"<<*ptr<<endl;
    cout<<b<<endl;

    int arr[] = { 1 , 2 , 3 , 4 , 5};
    cout<<"arr :"<<arr<<endl;
    cout<<"*arr :"<<*arr<<endl;
    cout<<"*arr + 1 :"<<*(arr+1)<<endl;
     cout<<"arr[1] :"<<arr[1]<<endl;

    return 0 ;
}