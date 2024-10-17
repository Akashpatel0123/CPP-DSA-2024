#include <iostream>
#include <stack> 
#include <string>
using namespace std;


string reverse(string str) // TC & SC = O(N)
{
    string ans;      
    stack<char> s;
    for (int i = 0; i < str.size(); i++)
    {
        s.push(str[i]);
    }

    while (!s.empty())
    {
        ans += s.top(); 
        s.pop();         
    }
    return ans;  
}

int main()
{
    string input = "hsaka"; 
    cout << reverse(input);  
    return 0;
}
