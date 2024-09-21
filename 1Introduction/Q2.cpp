#include<iostream>
using namespace std;
int main()
{   float pencil , pen , eraser , add ;
    cout<<"Enter the cost of pencil=";
    cin>>pencil;
     cout<<"Enter the cost of pen=";
     cin>>pen;
     cout<<"Enter the cost of eraser=";
     cin>>eraser;
add=pencil+pen+eraser;
    cout<<"Total cost="<<add<<endl;
    int tax;
    tax=0.18*add;
cout<<"18% of GST ="<<tax<<endl;
float final_price=tax+add;
cout<<"Final Price="<<final_price;

    return 0;


}
