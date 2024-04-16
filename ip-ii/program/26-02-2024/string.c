#include <stdio.h>
#include <string.h>

// Function to rearrange a string in alphabetical order
void rearrangeString(char str[]) {
    int n = strlen(str);
    
    // Bubble sort to rearrange characters in alphabetical order
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (str[j] > str[j + 1]) {
                // Swap characters
                char temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
        }
    }
}

int main() {
    char str[100];

    // Input the string
    printf("Enter a string: ");
    scanf("%s", str);

    // Rearrange the string in alphabetical order
    rearrangeString(str);

    // Output the rearranged string
    printf("Rearranged string in alphabetical order: %s\n", str);

    return 0;
}