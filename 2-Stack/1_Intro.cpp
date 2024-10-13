#include <iostream>
#include <vector>
using namespace std;

class Stack
{
    vector<int> vec; 
public:
    void push(int val)
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

    int top()
    {
        if (isEmpty())  
        {
            cout << "Stack is empty!\n";
            return -1;
        }
        return vec.back();  
    }

    bool isEmpty()
    {
        return vec.size() == 0; 
    }
};

int main()
{
    Stack s;  
    s.push(30);
    s.push(20);
    s.push(10);
    s.pop();

    while (!s.isEmpty())  
    {
        cout << s.top() << endl;  
        s.pop();  
    }

    return 0;
}
