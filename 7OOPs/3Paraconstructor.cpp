#include<iostream>
using namespace std;

class Car {
public:
    // Properties
    string name;

    // Functions
    void start() {
        cout << "Car started!\n";
    }

    // Parameterized Constructor
    Car(string name) {
        this->name = name;
    }
};

int main() {
    Car c1("kia Sonet");  // Object creation with parameterized constructor
    cout << c1.name << endl;  // Output the name of the car
    return 0;
}
