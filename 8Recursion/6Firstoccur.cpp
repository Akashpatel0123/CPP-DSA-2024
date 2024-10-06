#include<iostream>
#include<vector>
using namespace std;

int Firstoccur(vector<int> vec , int key , int i)
{
    if(vec[i]==key)
    {
        return i+1;
    }
    if(i==vec.size()-1)
    {
        return -1;
    }
    return Firstoccur(vec , key , i+1);
}
int main() {
   vector<int> vec = { 1 , 2 , 3 , 4 , 5};
   int key = 15;
   cout<<Firstoccur(vec , key , 0);
    return 0;
}