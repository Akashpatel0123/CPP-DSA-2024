#include<iostream>
#include<list>
using namespace std;
int main()
{
    list<int> ll;
    ll.push_front(30);
    ll.push_front(20);
    ll.push_front(10);
    ll.push_back(40);
    ll.push_back(50);
    cout<<ll.size()<<endl;
    cout<<ll.front()<<endl;
    cout<<ll.back()<<endl;
     auto it = ll.begin();
    advance(it, 2); // Move the iterator to the 2nd index (third position)
    ll.insert(it, 3, 5); // Insert three 5s at the position
 list<int>::iterator itr;
 for(itr=ll.begin() ; itr != ll.end() ; itr++)
 {
    cout<<(*itr)<<"->";
 }
 cout<<"NULL";
 return 0;
}