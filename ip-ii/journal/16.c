// Write a C program to compare two strings using a pointer.
#include <stdio.h>

int main() {
    char str1[] = "apple"; // First string
    char str2[] = "apple"; // Second string
    char *ptr1 = str1; // Pointer to the first string
    char *ptr2 = str2; // Pointer to the second string

    while (*ptr1 && *ptr2 && *ptr1 == *ptr2) {
        ptr1++; // Move pointer of first string to next character
        ptr2++; // Move pointer of second string to next character
    }

    if (*ptr1 == '\0' && *ptr2 == '\0') {
        printf("The strings are equal.\n");
    } else {
        printf("The strings are not equal.\n");
    }

    return 0;
}