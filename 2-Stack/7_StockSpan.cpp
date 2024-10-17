#include <iostream>
#include <stack>
#include <vector>
using namespace std;

void stockspan(vector<int>& stock, vector<int>& span)
{
    stack<int> s;
    s.push(0);
    span[0] = 1; 

    for(int i = 1; i < stock.size(); i++)
    {
        int curr = stock[i];
        while(!s.empty() && curr >= stock[s.top()]) {
            s.pop();
        }

        if(s.empty()) {
            span[i] = i + 1; 
        } else {
            int prev = s.top();
            span[i] = i - prev; 
        }
        s.push(i);
    }

    // Print the span values
    for(int i = 0; i < span.size(); i++) {
        cout << span[i] << " ";
    }
    cout << endl;
}

int main() {
    vector<int> stock = {100, 80, 60, 70, 60, 85, 100};
    vector<int> span(stock.size(), 0); 
    stockspan(stock, span);
    return 0;
}
