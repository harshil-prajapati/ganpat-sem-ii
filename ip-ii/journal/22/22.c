// Write a C program that will receive a file name and a line of text as command line arguments and display the total number of arguments passed and then write the line of text into the external file.
#include <stdio.h>

int main(int argc, char *argv[]) {
    
    // Display the total number of arguments passed
    printf("Total arguments : %d\n", argc);
    
    // Open the file in write mode
    FILE *file = fopen(argv[1], "w");
    if (file == NULL) {
        printf("Error opening file %s\n", argv[1]);
        return 1;
    }
    
    // Write the provided text to the file
    for (int i = 2; i < argc; i++) {
        fprintf(file, "%s\n", argv[i]);
    }
    
    // Close the file
    fclose(file);
    
    printf("Text successfully written to %s\n", argv[1]);
    
    return 0;
}