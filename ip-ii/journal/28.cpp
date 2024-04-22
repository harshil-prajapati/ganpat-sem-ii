// Write a C++ program that demonstrates the concept of Multiple Inheritance.
#include <iostream>
using namespace std;

// Base class 1
class Animal
{
public:
    void eat()
    {
        cout << "Animal is eating." << endl;
    }
};

// Base class 2
class Vehicle
{
public:
    void drive()
    {
        cout << "Vehicle is driving." << endl;
    }
};

// Derived class inheriting from both Animal and Vehicle
class Hybrid : public Animal, public Vehicle
{
public:
    void displayHybrid()
    {
        cout << "This is a hybrid." << endl;
    }
};

int main()
{
    // Creating an object of the derived class
    Hybrid myHybrid;

    // Calling methods from both base classes
    myHybrid.eat();           // Method from the first base class
    myHybrid.drive();         // Method from the second base class
    myHybrid.displayHybrid(); // Method from the derived class

    return 0;
}