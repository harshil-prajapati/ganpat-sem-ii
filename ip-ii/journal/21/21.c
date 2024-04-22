// Write a C program that reads a few numbers from users, if the number is a perfect number then write it in the file called Perfect, and if it is not a perfect number then write that number in the file called NonPrefect. Read numbers from Perfect and NonPerfect files and display them on screen under labels: Perfect & Non-Perfect with total count. (a perfect number is a positive integer number that is equal to the sum of its positive divisors, excluding the number itself. Ex. 6 is the perfect number. The sum of its divisors 1,2 & 3 equals 6)
#include <stdio.h>

// Function to check if a number is perfect
int isPerfect(int num)
{
    int sum = 0;
    for (int i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            sum += i;
        }
    }
    return sum == num;
}

int main()
{
    FILE *perfectFile, *nonPerfectFile; // File pointers
    int num, perfectCount = 0, nonPerfectCount = 0;

    // Open Perfect file in write mode
    perfectFile = fopen("Perfect.txt", "w");
    if (perfectFile == NULL)
    {
        printf("Error opening Perfect file.\n");
        return 1;
    }

    // Open NonPerfect file in write mode
    nonPerfectFile = fopen("NonPerfect.txt", "w");
    if (nonPerfectFile == NULL)
    {
        printf("Error opening NonPerfect file.\n");
        return 1;
    }

    // Read numbers from user
    printf("Enter numbers (enter 0 to stop):\n");
    while (1)
    {
        scanf("%d", &num);
        if (num == 0)
        {
            break;
        }
        if (isPerfect(num))
        {
            fprintf(perfectFile, "%d\n", num); // Write perfect number to Perfect file
            perfectCount++;
        }
        else
        {
            fprintf(nonPerfectFile, "%d\n", num); // Write non-perfect number to NonPerfect file
            nonPerfectCount++;
        }
    }

    // Close files
    fclose(perfectFile);
    fclose(nonPerfectFile);

    // Open Perfect file in read mode
    perfectFile = fopen("Perfect.txt", "r");
    if (perfectFile == NULL)
    {
        printf("Error opening Perfect file for reading.\n");
        return 1;
    }

    // Open NonPerfect file in read mode
    nonPerfectFile = fopen("NonPerfect.txt", "r");
    if (nonPerfectFile == NULL)
    {
        printf("Error opening NonPerfect file for reading.\n");
        return 1;
    }

    // Display perfect numbers
    printf("\nPerfect numbers:\n");
    while (fscanf(perfectFile, "%d", &num) != EOF)
    {
        printf("%d\n", num);
    }
    printf("Total Perfect numbers: %d\n", perfectCount);

    // Display non-perfect numbers
    printf("\nNon-Perfect numbers:\n");
    while (fscanf(nonPerfectFile, "%d", &num) != EOF)
    {
        printf("%d\n", num);
    }
    printf("Total Non-Perfect numbers: %d\n", nonPerfectCount);

    // Close files
    fclose(perfectFile);
    fclose(nonPerfectFile);

    return 0;
}