#include<iostream>
#define PI 3.14
using namespace std;
int main()
{
float radius , area;
    cout<<"Enter the radius =";
    cin>>radius;
    area=PI*radius*radius;
    cout<<"Area of circle = "<<area;
    return 0;
}