#include <iostream>
#include <string>

using namespace std;

void printAsciiValues(const string& input) {
    cout << "ASCII values for \"" << input << "\":" << endl;
    for (char c : input) {
        cout << "ASCII value of '" << c << "' is " << int(c) << endl;
    }
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);
    printAsciiValues(input);
    return 0;
}
