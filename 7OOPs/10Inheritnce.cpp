#include<iostream>
using namespace std;
//parent class
class Animal
{ public:
  string colour;

  void eat()
  {
   cout<<"Eats..\n";
  }
  void breath()
  {
    cout<<"Breaths..\n";
  }
};
//child class
class Fish : public Animal
{ public:
    string swim;
    void fins()
    {
        cout<<"fins..\n";
    }
    void gills()
    {
        cout<<"gills..\n";
    }
};

int main()
{
    Animal a1;
    Fish f1;
    //calling parent class functions
    f1.eat();
    f1.breath();
    return 0;
}