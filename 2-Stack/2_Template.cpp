#include<iostream>
#include<string>
#include<vector>
using namespace std;
template <class T>
class Stack
{
    vector<T> vec; 
public:
    void push(T val)
    {
        vec.push_back(val); 
    }

    void pop()
    {
        if (isEmpty())  
        {
            cout << "Stack is empty!\n";
            return;
        }
        vec.pop_back();  
    }

    T top()
    {
        return vec.back();  
    }

    bool isEmpty()
    {
        return vec.size() == 0; 
    }
};

int main()
{
    Stack<string> s;  
    s.push("I");
    s.push("am");
    s.push("Learning");
    
    while (!s.isEmpty())  
    {
        cout << s.top() << endl;  
        s.pop();  
    }

    return 0;
}
