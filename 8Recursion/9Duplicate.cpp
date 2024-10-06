#include <iostream>
using namespace std;

// Recursive function to remove duplicates
string removeDuplicates(string str, int index = 0, string result = "") {
    // Base case: if index reaches the end of the string, return the result
    if (index == str.length()) {
        return result;
    }

    // Check if the current character is already in the result
    if (result.find(str[index]) == string::npos) {
        // Character not found in result, so add it
        result += str[index];
    }

    // Recursive call to process the next character
    return removeDuplicates(str, index + 1, result);
}

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;

    string output = removeDuplicates(input);
    cout << "String after removing duplicates: " << output << endl;

    return 0;
}
