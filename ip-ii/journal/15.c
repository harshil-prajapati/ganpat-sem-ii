// Write a C program to count non unique numbers from an array using a pointer.
// Example: Input Array [1,2,7,1,5,2,9,5] 
// Output: Total non Unique Numbers: 2. non Unique Numbers: 7, 9
#include <stdio.h>
int main()
{
    int arr1[100], n, ctr = 0;  // Declare an array to store integer values, n for array size, and ctr for counting duplicates
    int i, j, k;  // Declare loop counters
    int h = 0; // total non unique numbers
    // Prompt the user to input the number of elements to be stored in the array
    printf("\nPrint all non unique elements of an array\n");
    printf("--------------------------------------------\n");
    printf("Input the number of elements to be stored in the array : ");
    scanf("%d", &n);
    // Prompt the user to input n elements into the array
    printf("Input %d elements in the array :\n", n);
    for (i = 0; i < n; i++)
    {
        printf("element - %d : ", i);
        scanf("%d", &arr1[i]);  // Read the input and store it in the array
    }
    // Print unique elements in the array
    printf("\nThe unique elements found in the array are : ");
    for (i = 0; i < n; i++)
    {
        ctr = 0;  // Reset the counter for each element
        for (j = 0, k = n; j < k + 1; j++)
        {
            /* Increment the counter when the search value is duplicate. */
            if (i != j)
            {
                if (arr1[i] == arr1[j])
                {
                    ctr++;
                }
            }
        }
        if (ctr == 0)
        {
            printf(" %d ", arr1[i]);  // Print the non unique element
            h++;
        }
    }
    printf("\nTotal non Unique Number is : %d\n\n", h);
    return 0;  // Return 0 to indicate successful execution
}