// Write a C program to create UDF that receives two strings as input and return 1 if these two strings are anagram to each other. (An anagram of a string is another string that contains the same characters, only the order of characters can be different. Both strings must be of the same length. For example, “silent” and “listen” are an anagram of each other.
#include <stdio.h>
#include <string.h>

int areAnagrams(char str1[], char str2[]) {
    int count1[256] = {0};
    int count2[256] = {0};
    int i;

    if (strlen(str1) != strlen(str2))
        return 0;

    for (i = 0; str1[i] != '\0'; i++) {
        count1[str1[i]]++;
        count2[str2[i]]++;
    }

    // for(i = 0; i < 256; i++){
    //     printf("%d %d\n",i , count1[i]);
    // }

    for (i = 0; i < 256; i++) {
        if (count1[i] != count2[i])
            return 0;
    }

    return 1;
}

int main() {
    char str1[256], str2[256];

    printf("Enter the first string : ");
    scanf("%s", str1);
    printf("Enter the second string : ");
    scanf("%s", str2);

    if (areAnagrams(str1, str2))
        printf("The strings \"%s\" and \"%s\" are anagrams.\n", str1, str2);
    else
        printf("The strings \"%s\" and \"%s\" are not anagrams.\n", str1, str2);

    return 0;
}