// Write a C program that calculates sum and average of the elements of an array using a pointer.
#include <stdio.h>

#define SIZE 5 // Size of the array

int main() {
    int arr[SIZE] = {5, 10, 15, 20, 25}; // Initializing array with sample values
    int *ptr = arr; // Pointer to the first element of the array
    int sum = 0;
    float average;

    // Calculating sum using pointer arithmetic
    for (int i = 0; i < SIZE; i++) {
        sum += *(ptr + i); // Dereferencing pointer and accessing elements
    }

    average = (float)sum / SIZE; // Calculating average

    // Printing sum and average
    printf("Sum of array elements: %d\n", sum);
    printf("Average of array elements: %.2f\n", average);

    return 0;
}