#include<iostream>
#include<cstring>
using namespace std;
void upper(char ch[] , int n)
{
  for(int i=0 ; i<n ; i++)
  {
    if(ch[i]>='a' && ch[i]<='z') //Akash
    {
       ch[i]=ch[i]-'a'+'A';
    }
  }
}
void lower(char ch1[] , int n)
{
 for(int i=0 ; i<n ; i++)
 {
    if(ch1[i]>='A' && ch1[i]<='Z')
    {
       ch1[i]=ch1[i]-'A'+'a';
    }
 }
 }
int main()
{
    char ch[50];
    cin>>ch;

    upper(ch ,strlen(ch));
     cout<<ch<<endl;
    lower(ch , strlen(ch));
    cout<<ch<<endl;
return 0;
}