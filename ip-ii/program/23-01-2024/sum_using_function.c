#include <stdio.h>

int sum();
int sub();
int mul();
int div();

int main()
{
    int operator;
    int num1, num2;
    printf("exp : sum = 1, sub = 2, mul = 3, div = 4\n");
    printf("Enter operator : ");
    scanf("%d", &operator);

    printf("Enter two numbers : ");
    scanf("%d%d", &num1, &num2);

    switch (operator)
    {
    case 1:
        sum(num1,num2);
        break;
    case 2:
        sub(num1, num2);
        break;
    case 3:
        mul(num1, num2);
        break;
    case 4:
        div(num1, num2);
        break;
    default:
        break;
    }
    return 0;
}

int sum(int num1, int num2)
{
    int ans;
    ans = num1 + num2;

    printf("Ans is : %d\n", ans);

    return 0;
}

int sub(int num1, int num2)
{
    int ans;

    ans = num1 - num2;

    printf("Ans is : %d\n", ans);

    return 0;
}

int mul(int num1, int num2)
{
    int ans;

    ans = num1 * num2;

    printf("Ans is : %d\n", ans);

    return 0;
}

int div(int num1, int num2)
{
    int ans;

    if (num2 != 0)
    {
        ans = num1 / num2;
        printf("Ans is : %d\n", ans);
    }
    else
    {
        printf("Cannot divide by zero.\n");
    }

    return 0;
}