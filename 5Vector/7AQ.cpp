#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void water(vector<int> height , int n)
{
 vector<int> result;
 int diff , pos , ans , res = 0;
 for(int i=0 ; i<n ; i++)
 {
  for(int j=n-1 ; j>i ; j--)
  {
    diff = min(height[i] , height[j]);
    pos = j - i;
    ans = diff * pos;
    res = max(ans , res);
  }
 }
 cout<<"Max amount of water a container can hold is : "<<res;
}

int main()
{                      // 0   1   2   3   4   5   6   7   8     (n = 9)
    vector<int> Height = {1 , 8 , 6 , 2 , 5 , 4 , 8 , 3 , 7};
    int length = Height.size();
    water(Height , length);

    return 0;
}