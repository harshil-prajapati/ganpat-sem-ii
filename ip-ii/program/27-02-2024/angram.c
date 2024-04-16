#include <stdio.h>
#include <string.h>

// Function to check if two strings are anagrams
int areAnagrams(char *str1, char *str2) {
    int count1[256] = {0};
    int count2[256] = {0};
    int i;

    // If the lengths of the strings are not equal, they can't be anagrams
    if (strlen(str1) != strlen(str2))
        return 0;

    // Count frequency of characters in the first string
    for (i = 0; str1[i] && str2[i]; i++) {
        count1[str1[i]]++;
        count2[str2[i]]++;
    }

    // If the frequencies of characters in both strings are same, they are anagrams
    for (i = 0; i < 256; i++) {
        if (count1[i] != count2[i])
            return 0;
    }

    return 1;
}

int main() {
    char str1[100], str2[100];

    // Input two strings
    printf("Enter the first string: ");
    scanf("%s", str1);
    printf("Enter the second string: ");
    scanf("%s", str2);

    // Check if the strings are anagrams
    if (areAnagrams(str1, str2))
        printf("The strings \"%s\" and \"%s\" are anagrams.\n", str1, str2);
    else
        printf("The strings \"%s\" and \"%s\" are not anagrams.\n", str1, str2);

    return 0;
}