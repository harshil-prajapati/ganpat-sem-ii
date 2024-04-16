// Write a C function using a pointer to swap the values of two variables.
#include <stdio.h>

// Function to swap the values of two variables using pointers
void swap(int *a, int *b) {
    int temp = *a; // Store the value of 'a' in a temporary variable
    *a = *b;      // Assign the value of 'b' to 'a'
    *b = temp;    // Assign the value stored in the temporary variable to 'b'
}

int main() {
    int x = 5, y = 10; // Declare and initialize two variables

    printf("Before swapping: x = %d, y = %d\n", x, y);

    // Call the swap function with addresses of 'x' and 'y'
    swap(&x, &y);

    printf("After swapping: x = %d, y = %d\n", x, y);

    return 0;
}
