#include<iostream>
using namespace std;
void func()
{
  int *ptr = new int; //a pointer ptr and allocate a new dynamic memory 
  *ptr = 5;
  delete ptr; //delete dynamic memory space
  cout<<*ptr;


}

void array()
{   int size;
    cin>>size;
    int *ptr = new int[size];
    int a = 1;
    for(int i=0 ; i<size ; i++)
    {
        ptr[i] = a;
        cout<<ptr[i]<<endl;
        a++;
    }
}

int main(){
    //func();
    array();
    return 0;
}