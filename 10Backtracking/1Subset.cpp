#include <iostream>
#include <string>
using namespace std;

void subset(string str, string substr) {
    if (str.size() == 0) {
        cout << substr << endl;
        return;
    }

    char ch = str[0];
    subset(str.substr(1), substr + ch); // Yes 
    subset(str.substr(1), substr);      // No 
}

int main() {
    string str = "abc";  
    string sub = "";     
    subset(str, sub);

    return 0;
}
