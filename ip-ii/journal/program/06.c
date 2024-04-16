// Write a C program to make a function that receives string as input and rewrite it in alphabetical order. Example: Input String:->computer Output String:->cemoprtu
#include <stdio.h>
#include <string.h>

void rearrangeString(char str[]) {
    int n = strlen(str);
    
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (str[j] > str[j + 1]) {
                char temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
        }
    }
}

int main() {
    char str[100];

    printf("Enter a string : ");
    scanf("%s", str);

    rearrangeString(str);

    printf("Rearranged string in alphabetical order: %s\n", str);

    return 0;
}