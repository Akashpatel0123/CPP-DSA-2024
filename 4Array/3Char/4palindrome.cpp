#include <iostream>
#include <cstring>
using namespace std;

bool palindrome(char str[], int n)
{
    for (int i = 0; i < n / 2; ++i) 
    {
        if (str[i] != str[n-i-1]) 
        {
            cout << "The string is a palindrome." << endl;
            return false;
        }
    }
    cout << "The string is not a palindrome." << endl;
    return true;
}

int main() {
    cout << "Enter a character string: ";
    char ch[50];
    cin >> ch;
     palindrome( ch , strlen(ch));

    return 0;
}
