#include<iostream>
#include<stack>
#include<string>
using namespace std;
bool duplicate(string str)
{
    stack<char> s;
    for(int i=0 ; i<str.size() ; i++)
    {
        if(str[i] != ')')
        {
            s.push(str[i]);
        }
        else
        {
            if(s.top()=='(') return true;
        else
        {
            while(s.top() != '(')
            {
                s.pop();
            }
            s.pop();
        }
        }
    }
    return false;
}
int main()
{
    string str = "((a+b)+c)";
    string str1 = "((a+b))";
    if(duplicate(str))
    {
        cout<<" duplicate\n";
    }else{
        cout<<"no duplicate";
    }
    return 0;
}