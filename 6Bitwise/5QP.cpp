#include<iostream>
using namespace std;

void clear(int num , int i , int j)
{   
    int one = ~0;
    int left = (one << j+1);  
    int right = (1 << i) - 1;
    int mask = left | right ;
    num = num & mask;
    cout<<num<<endl;

}

int main()
{
    int num = 31 ;
    int a = 1 , b = 3 ;
    clear(num , a , b);

    return 0;
}