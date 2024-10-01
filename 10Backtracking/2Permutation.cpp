#include <iostream>
#include <string>
using namespace std;

void permutation(string str , string str1)
{ 
    if(str.size()==0)
    {
        cout<<str1<<endl;
        return ;
    }
 for(int i=0 ; i<str.size() ; i++)
 {
     char ch = str[i];
     string newstr = str.substr(0,i) + str.substr(i+1);
     permutation(newstr , str1+ch);
 }
}

int main() {
    string str = "abc";
    string str1 = "";
    permutation(str, str1);
    
    return 0;
}
