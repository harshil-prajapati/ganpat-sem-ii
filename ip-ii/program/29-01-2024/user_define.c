#include <stdio.h>

int max()
{
    int num[100], i, max = num[0], count;

    printf("How Many Number You want to Enter : ");
    scanf("%d", &count);
    
    for (i = 0; i < count; i++)
    {
        printf("Enter Number %d : ",i+1);
        scanf("%d",&num[i]);
    }

    for (i = 0; i < count; i++)
    {
        if (max<num[i])
        {
            max = num[i];
        }
    }

    printf("\nMax Number is : %d", max);
    
    
    return 0;
}

int min()
{
    int num[100], i, min = num[0], count;

    printf("\nHow Many Number You want to Enter : ");
    scanf("%d", &count);
    
    for (i = 0; i < count; i++)
    {
        printf("Enter Number %d : ",i+1);
        scanf("%d",&num[i]);
    }

    for (i = 0; i < count; i++)
    {
        if (min<num[i])
        {
            min = num[i];
        }
    }

    printf("\nMax Number is : %d", min);
    
    
    return 0;
}

int power()
{
    int base, ans = 1, i, power;

    printf("\nEnter Base : ");
    scanf("%d", &base);
    printf("Enter Power : ");
    scanf("%d", &power);

    for (i = 1; i <= power; i++)
    {
        ans = base * ans;
    }

    printf("Power of Number : %d", ans);
    
}

int power_sum()
{
    int base, ans[100], i, power, stop, p=0, u=1, ans1;

    printf("\nEnter Base : ");
    scanf("%d", &base);
    printf("Enter Power : ");
    scanf("%d", &power);

    stop = base;

    for (i = 1; i <= power; i++)
    {
        ans[p] = ans[p] * u;
    }

    for (i = 0; i <= power; i++)
    {
        ans1 = ans1 + ans[i];

        printf("\nAns is : %d", ans1);
    }

    // int number, i, power;
    // int sum = 0;

    // printf("Enter maximum values of series number : ");
    // scanf("%d", &number);

    // printf("Enter Power : ");
    // scanf("%d", &power);

    // sum = (number * (number + 1) * (2 * number + 1 ));
    // printf("Sum of the above given series : ");
    // for (i = 1; i <= number; i++)
    // {
    //     if (i != number)
    //         printf("%d^%d + ", i, power);
    //     else
    //         printf("%d^%d = %d ", i, power, sum);
    // }
    
    
}

int main()
{   

    // max();
    // min();

    // int choise;
    // printf("Enter choise min = 1 or max = 2 : ");
    // scanf("%d",&choise);

    // switch (choise)
    // {
    // case 1:
    //     min();
    //     break;
    // case 2:
    //     max();
    //     break;
    // default:
    //     break;
    // }

    // power();

    power_sum();
    
    return 0;
}