#include <iostream>
#include <stack>  // Include the stack header
using namespace std;
void push_bottom(stack<int> &s ,int value)
{
    if(s.empty())
    {
        s.push(value);
        return ;
    }
    int temp = s.top();
    s.pop();
    push_bottom(s , value);
    s.push(temp);
}
int main()
{
    stack<int> s;
    s.push(3);
    s.push(2);
    s.push(1);
    push_bottom(s , 4);
   while(!s.empty())
   {
       cout<<s.top()<<endl;
       s.pop();
   }
    return 0;
}
