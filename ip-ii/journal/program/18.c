// Write a C function using a pointer that finds the largest number from given three numbers.
#include <stdio.h>

// Function to find the largest number among three numbers using pointers
int findLargest(int *arr)
{
    int largest = arr[0]; // Assume the first number is the largest initially

    for (int i = 1; i < 3; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i]; // Update 'largest' if a larger number is found
        }
    }

    return largest;
}

int main()
{
    int numbers[3] = {10, 200, 15}; // Three numbers stored in an array

    // Call the findLargest function with the address of the array
    int largest = findLargest(numbers);

    printf("The largest number is: %d\n", largest);

    return 0;
}