
#include <iostream>
using namespace std;

int tile(int n)
{
    if(n==0 || n==1)
    {
        return 1;
    }
    return tile(n-1) + tile(n-2);
}

int main() {
  int n = 4 ;
  cout<<tile(n)<<endl;
    return 0;
}