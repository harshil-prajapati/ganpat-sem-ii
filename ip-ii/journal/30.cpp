// Write a C++ program that demonstrates the concept of Abstract Classes.
#include <iostream>
using namespace std;

// Abstract Base Class
class Shape
{
public:
    // Pure virtual function
    virtual void draw() = 0;

    // Normal member function
    void displayMessage()
    {
        cout << "This is a shape." << endl;
    }
};

// Derived class 1 implementing the abstract class
class Circle : public Shape
{
public:
    // Implementation of the pure virtual function
    void draw()
    {
        cout << "Drawing a circle." << endl;
    }
};

// Derived class 2 implementing the abstract class
class Rectangle : public Shape
{
public:
    // Implementation of the pure virtual function
    void draw()
    {
        cout << "Drawing a rectangle." << endl;
    }
};

int main()
{
    // Creating objects of the derived classes
    Circle myCircle;
    Rectangle myRectangle;

    // Calling the draw() method for each object
    myCircle.draw();
    myRectangle.draw();

    // Calling the displayMessage() method from the base class
    myCircle.displayMessage();
    myRectangle.displayMessage();

    return 0;
}