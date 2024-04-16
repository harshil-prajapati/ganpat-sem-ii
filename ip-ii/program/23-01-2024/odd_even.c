#include<stdio.h>

int odd_even(int num);

int main()
{
    int num;
    printf("Enter Number : ");
    scanf("%d", &num);

    odd_even(num);

    if (odd_even(num)==0)
    {
        printf("Even\n");
    }
    else
    {
        printf("Odd\n");
    }
    
    return 0;
}

int odd_even(int num)
{   
    if (num % 2 == 0)
    {
        return 0;
    }
}