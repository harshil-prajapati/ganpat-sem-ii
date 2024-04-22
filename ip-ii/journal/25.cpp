#include <iostream>

class Counter {
private:
    static int objectCount; // Static variable to keep track of object count
    
public:
    Counter() {
        objectCount++; // Increment count each time a new object is created
    }
    
    ~Counter() {
        objectCount--; // Decrement count when an object is destroyed
    }
    
    static int getObjectCount() {
        return objectCount;
    }
};

int Counter::objectCount = 0; // Initialize static variable

int main() {
    Counter obj1; // First object created
    Counter obj2; // Second object created
    Counter obj3; // Third Object created
    
    std::cout << "Number of objects created : " << Counter::getObjectCount() << std::endl;
    
    return 0;
}