#include<iostream>
using namespace std;

int fact(int a)
{
    int fact = 1;
    for(int i=1 ; i<=a ; i++)
    {
        fact *= i;
    }
    return fact ;
}
int bino(int n , int r)
{
    int val1 = fact(n);
    int val2 = fact(r);
    int val3 = fact(n-r);

    int out = val1 / (val2 * val3);
    cout<<"Binomial coefficent is ="<<out;
    return out;
}
int main()
{
    int o , p ;
    cout<<"Enter number of options :";
    cin>>o;
    cout<<"Enter number to pick :";
    cin>>p;
    bino( o , p);

    return 0;

}