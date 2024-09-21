#include<iostream>
using namespace std;

class Car
{
   public:
   //Properties
   string name;

   //Functions
   void start()
   {
     cout<<"Car started!\n";
   }

   //Setter : Set the value (Input)
   void setname(string valname)
   {
     name = valname;
   };

  //Getter : Return the value (Output)
  string getname()
{
  return name;
}
};

int main()
{
   Car c1; 
   c1.setname("kia sonet");
   cout<<c1.getname();
   return 0;
}