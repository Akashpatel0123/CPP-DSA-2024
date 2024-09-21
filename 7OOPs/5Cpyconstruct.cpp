//Copy-constructor
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

   //1.  Parameterized constructor
    Car(string name) 
    { 
      cout<<"assining name\n";
        this->name = name;  // 'this->name' refers to the class member
    }


   //3.Coustom Copy-constructors
   Car(const Car  &valname)
   {
     this-> name = valname.name; // 'this->' = class member, 'name' = parameter
     cout<<"This is a copy constructor\n";
   }

};

int main()
{
   Car c1("Kia Sonet"); //  c1  is the object of type Car            
   Car c2(c1);         // Object c2 is created using the copy constructor
   cout<<c2.name<<endl;
   return 0;
}