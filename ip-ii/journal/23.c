// Write a C program to perform arithmetic operation on given arguments based on the
// operator supplied with command line argument. Ex. Arguments to program
// C:\claprogram 10 + 20
// Ans: 30
// or C:\claprogram 20 * 10
// Ans: 200
#include <stdio.h>
#include <stdlib.h> // For atoi()

int main(int argc, char *argv[])
{

    // Convert operands to integers
    int operand1 = atoi(argv[1]);
    int operand2 = atoi(argv[3]);

    // Perform arithmetic operation based on the operator
    char operator= argv[2][0]; // Get the first character of the operator

    int result;
    switch (operator)
    {
    case '+':
        result = operand1 + operand2;
        break;
    case '-':
        result = operand1 - operand2;
        break;
    case '*':
        result = operand1 * operand2;
        break;
    case '/':
        // Check for division by zero
        if (operand2 == 0)
        {
            printf("Error : Division by zero\n");
            return 1;
        }
        result = operand1 / operand2;
        break;
    default:
        printf("Error : Invalid operator\n");
        return 1;
    }

    // Display the result
    printf("Ans : %d\n", result);

    return 0;
}