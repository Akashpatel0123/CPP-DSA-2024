#include<iostream>
using namespace std;
 
 int main()
 {  
    int array[] = { 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , 10 };
    int size = sizeof(array)/sizeof(int);
    int copyarr[size];
    for(int i=0 ;  i<size ; i++)
    {
        int j = size - i -1 ;
        copyarr[i]=array[j];
    }

    for(int i=0 ; i<size ; i++)
    {   
        array[i]=copyarr[i];
        cout<<array[i]<<"  ";
    }
  
    return 0;

 }
//Space complixity = O(1)
//Time complixity = O(n)

