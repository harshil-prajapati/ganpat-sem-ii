// Write a C program to print the address and value of a variable by using a pointer.
#include <stdio.h>

int main() {
    int num = 10; // variable declaration and initialization

    // pointer declaration and initialization with the address of 'num'
    int *ptr = &num;

    // printing the address and value of 'num' using pointers
    printf("Address of num : %p\n", &num); // %p is used to print address
    printf("Value of num : %d\n", *ptr);    // *ptr is used to dereference the pointer and get the value

    return 0;
}