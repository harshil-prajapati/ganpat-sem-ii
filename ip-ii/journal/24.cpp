// Write a C++ program to get the details of students like eno, name and percentage and display the same using the concept of Class and objects.
#include <iostream>
#include <string>

using namespace std;

class Student
{
private:
    int eno;
    string name; // Change char array to string
    float percentage;

public:
    // Constructor to initialize the object
    Student(int e, string n, float p)
    {
        eno = e;
        name = n; // Assign string directly
        percentage = p;
    }

    // Function to display student details
    void displayDetails()
    {
        cout << "Student Details:" << endl;
        cout << "Enrollment No: " << eno << endl;
        cout << "Name: " << name << endl;
        cout << "Percentage: " << percentage << "%" << endl;
    }
};

int main()
{
    // Creating objects of class Student
    Student student1(101, "John", 85.5);
    Student student2(102, "Alice", 90.2);

    // Displaying student details
    student1.displayDetails();
    cout << endl;
    student2.displayDetails();

    return 0;
}