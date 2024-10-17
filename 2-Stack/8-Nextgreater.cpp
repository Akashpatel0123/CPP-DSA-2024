 #include <iostream>
#include <vector>
#include <stack>  
using namespace std;

void next_greater(vector<int>& vec, vector<int>& ans) {  
    stack<int> s;
    s.push(-1);
    ans[ans.size()-1] = -1;  
    for(int i = vec.size() - 1; i >= 0; i--) {
    
        while(!s.empty() && vec[i] >= s.top()) {
            s.pop();
        }
        
        if(s.empty()) {
            ans[i] = -1;
        } else {
            ans[i] = s.top();  
        }
        s.push(vec[i]);  
    }
}

int main() {
    vector<int> vec = {6, 8, 0, 1, 3};
    vector<int> ans(vec.size(), 0);  
    next_greater(vec, ans);
    

    cout << "Next greater elements are: ";
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    cout << endl;

    return 0;
}
