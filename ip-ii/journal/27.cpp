// Write a C++ program that demonstrates the concept of Multilevel Inheritance.
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

// Intermediate derived class inheriting from Vehicle
class Car : public Vehicle
{
public:
    void displayCar()
    {
        cout << "This is a car." << endl;
    }
};

// Derived class inheriting from Car
class SportsCar : public Car
{
public:
    void displaySportsCar()
    {
        cout << "This is a sports car." << endl;
    }
};

int main()
{
    // Creating an object of the derived class
    SportsCar mySportsCar;

    // Calling methods from all three levels of inheritance
    mySportsCar.display();          // Method from the base class
    mySportsCar.displayCar();       // Method from the intermediate derived class
    mySportsCar.displaySportsCar(); // Method from the derived class

    return 0;
}