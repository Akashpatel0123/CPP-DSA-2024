// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
using namespace std;

int lastoccur(vector<int> vec , int key , int i)
{
    if(vec[i]==key)
    {
        return i+1;
    }
    if(i==0)
    {
        return -1;
    }
    return lastoccur(vec , key , i-1);
}
int main() {
   vector<int> vec = { 1 , 2 , 3 , 3 , 3};
   int key = 2 ;
   int i = vec.size() - 1;
   cout<<lastoccur(vec , key , i);
    return 0;
}