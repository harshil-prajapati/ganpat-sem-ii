// Write a C++ program that demonstrates the concept of Single Inheritance.
#include <iostream>
using namespace std;

// Base class
class Vehicle
{
public:
    void display()
    {
        cout << "This is a vehicle." << endl;
    }
};

// Derived class inheriting from Vehicle
class Car : public Vehicle
{
public:
    void displayCar()
    {
        cout << "This is a car." << endl;
    }
};

int main()
{
    // Creating an object of the derived class
    Car myCar;

    // Calling methods from both base and derived classes
    myCar.display();    // Method from the base class
    myCar.displayCar(); // Method from the derived class

    return 0;
}