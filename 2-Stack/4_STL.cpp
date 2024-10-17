#include <iostream>
#include <stack>  // Include the stack header
using namespace std;
int main()
{
    stack<int> s;
    s.push(30);
    s.push(20);
    s.push(10);
    cout << "Top element: " << s.top() << endl; 
    s.pop();
    cout << "Top element after pop: " << s.top() << endl;  
    if (s.empty())
    {
        cout << "Stack is empty!" << endl;
    }
    else
    {
        cout << "Stack is not empty!" << endl;
    }
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    return 0;
}
