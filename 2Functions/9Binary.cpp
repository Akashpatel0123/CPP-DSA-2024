//Convert from Binary to Decimal
//n = 101
#include<iostream>
using namespace std;
void Dec(int binary)
{   
    int dnum=0;
    int pow=1;
    while(binary>0)
    {   
        int lastdigit = binary % 10;
        dnum += lastdigit * pow;
        pow *= 2;
        binary /= 10;
    }
    cout<<"The decimal number is "<<dnum;
}
int main()
{
    int binary;
    cout<<"Enter a binary number :";
    cin>>binary;
    Dec(binary);
    return 0;
}