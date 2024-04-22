// Write a C program to read data from the keyboard by getchar(). Write it to a file called Input, again read the same data from the file Input and display it on the screen.
#include <stdio.h>

int main()
{
    FILE *file; // File pointer
    char c;     // Variable to store input character

    // Open file in write mode
    file = fopen("Input.txt", "w");

    if (file == NULL)
    {
        printf("Error opening file.\n");
        return 1;
    }

    // Read data from keyboard using getchar() and write it to the file
    printf("Enter data. Press Ctrl+Z on Windows to end:\n");
    while ((c = getchar()) != EOF)
    {
        fputc(c, file);
    }

    // Close the file
    fclose(file);

    // Open file in read mode
    file = fopen("Input.txt", "r");

    if (file == NULL)
    {
        printf("Error opening file.\n");
        return 1;
    }

    // Read data from the file and display it on the screen
    printf("\nData read from file:\n");
    while ((c = fgetc(file)) != EOF)
    {
        putchar(c);
    }

    // Close the file
    fclose(file);

    return 0;
}