#include <iostream>
#include <string>
using namespace std;

bool isanagram(string str1, string str2) {
    if (str1.length() != str2.length()) {
        cout << "Not a valid anagram\n";
        return false;
    }

    int count[26] = {0}; // Integer array to count occurrences of each character

    // Increment the count for each character in str1
    for (int i = 0; i < str1.length(); ++i) {
        count[str1[i] - 'a']++;
    }

    // Decrement the count for each character in str2
    for (int i = 0; i < str2.length(); ++i) {
        count[str2[i] - 'a']--;
    }

    // Check if all counts are zero
    for (int i = 0; i < 26; ++i) {
        if (count[i] != 0) {
            cout << "Not valid anagrams\n";
            return false;
        }
    }

    cout << "Valid anagram\n";
    return true;
}

int main() {
    string s1 = "anagram";
    string s2 = "nagaram";
    isanagram(s1, s2);

    return 0;
}