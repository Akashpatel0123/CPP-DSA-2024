#include<iostream>
using namespace std;

class Car
{
   public:
   //Properties
   string name; //member variable or data member

   //Functions
   void start()
   {
     cout<<"Car started!\n";
   }

   //Constructors
   Car()
   {
   cout<<"Automatically creataed and called by object\n";  
   }

};

int main()
{
   Car c1; //  c1  is the object of type Car            
   return 0;
}