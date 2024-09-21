#include<iostream>
#include<vector>
using namespace std;
int main()
{
//     vector<int> vec1;
//     vector<int> vec2 = { 1 , 2 , 3 , 4};
//     vector<int> vec3(5 , -1);
//     cout<<vec3.size()<<endl;
//  for(int i=0 ; i<vec3.size() ; i++)
//   {
//     cout<<vec3[i]<<" ";
//   }
//     return 0;
vector<int> vec= {1 , 2 , 3 , 4};
cout<<"Size : "<<vec.size()<<endl;
cout<<"Capacity : "<<vec.capacity()<<endl;
cout<<"-------------------------------------"<<endl;
vec.push_back(5); // Add new element
cout<<"Size : "<<vec.size()<<endl;
cout<<"Capacity : "<<vec.capacity()<<endl;
cout<<"-------------------------------------"<<endl;
vec.pop_back();
cout<<"Size : "<<vec.size()<<endl;
cout<<"Capacity : "<<vec.capacity()<<endl;
return 0;
}