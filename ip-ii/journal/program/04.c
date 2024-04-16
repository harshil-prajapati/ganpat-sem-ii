// Write a C program to make the function search () that searches the given element from an array and returns its position. (Pass the array as argument in function search ()).
#include <stdio.h>

int search(int arr[], int size, int element) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == element) {
            return i;
        }
    }
    return -1;
}

int main() 
{
    int arr[] = {10, 23, 5, 17, 8, 12, 254, 872, 87};
    int size = sizeof(arr);

    int element_to_search;
    
    printf("Enter Search Element : ");
    scanf("%d", &element_to_search);

    int position = search(arr, size, element_to_search);

    if (position != -1) {
        printf("Element %d found at position %d.\n", element_to_search, position);
    } else {
        printf("Element %d not found in the array.\n", element_to_search);
    }

    return 0;
}
