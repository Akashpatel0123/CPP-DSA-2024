#include<iostream>
#include<vector>
using namespace std;
// int main() Brute force approach TC = O(n^2)
// {
//     vector<int> vec = { 2 , 7 , 11 , 15};
//     for(int i=0 ; i<=vec.size() ; i++)
//     {
//         for(int j=i+1 ; j<=vec.size() ; j++)
//         {
//             if(vec[i]+vec[j]==9)
//             {
//                 cout<<i<<" "<<j<<endl;
//                 break;
//             }
//         }
//     }
//     return 0;
// }

//Linear approach TC = O(n)
vector<int> pairsum(vector<int> arr , int target)
{
  vector<int> tag;
  int str = 0 , end = arr.size()-1 ;
  while (str < end)
  {
    if(arr[str] + arr[end] == target)
    {
        tag.push_back(arr[str]);
        tag.push_back(arr[end]);
        return tag;
    }
    else if(arr[str] + arr[end] > target)
    {
        end--;
    }

    else{
        str++;
    }
  }
  return tag;
}

int main()
{
    vector<int> vec = { 2 , 7 , 11 , 15};
    int sum = 9;
   vector<int> ans =  pairsum(vec , sum);
   cout<<ans[0]<<" , "<<ans[1]<<endl;
    return 0;
}