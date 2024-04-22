// Write a C++ program that demonstrates the concept of Hierarchical Inheritance.
#include <iostream>
using namespace std;

// Base class
class Animal
{
public:
    void eat()
    {
        cout << "Animal is eating." << endl;
    }
};

// Derived class 1 inheriting from Animal
class Dog : public Animal
{
public:
    void bark()
    {
        cout << "Dog is barking." << endl;
    }
};

// Derived class 2 inheriting from Animal
class Cat : public Animal
{
public:
    void meow()
    {
        cout << "Cat is meowing." << endl;
    }
};

int main()
{
    // Creating objects of the derived classes
    Dog myDog;
    Cat myCat;

    // Calling methods from the base class and respective derived classes
    myDog.eat();  // Method from the base class
    myDog.bark(); // Method from the first derived class

    myCat.eat();  // Method from the base class
    myCat.meow(); // Method from the second derived class

    return 0;
}
