#include<iostream>
#include<string>
using namespace std;

void vowel(string str1 )
{
  int count = 0;
  for(int i=0 ; i<str1.length() ; i++)
  {
    if(str1[i] == 'a' || str1[i] == 'e' ||str1[i] == 'i' || str1[i] == 'o' || str1[i] == 'u' )
    {
        count++;
    }
  }
  cout<<count;
}

int main()
{
    string st;
    cout<<"Enter a string : ";
    cin>>st;
    vowel(st);
    return 0;
}