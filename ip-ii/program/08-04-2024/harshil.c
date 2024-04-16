// Write a C function using a pointer that finds the largest number from given three numbers.
#include <stdio.h>

int find(int *num1, int *num2, int *num3) {
    int largest = *num1;

    if (*num2 > largest && *num2 > *num3) {
        largest = *num2;
    }

    else if (*num3 > largest && *num3 > *num2)
    {
        largest = *num3;
    }

    return largest;
}

int main() {
    int num1, num2, num3;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    int largest = find(&num1, &num2, &num3);

    printf("The largest number is: %d\n", largest);

    return 0;
}