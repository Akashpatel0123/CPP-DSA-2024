#include<iostream>
using namespace std;

int decrease(int n)
{
  if(n==1)
  {
    return 1;
  }
 cout<<n<<",";
 return decrease(n-1);
}

int main()
{
    cout<<decrease(10);
    
    return 0;
}