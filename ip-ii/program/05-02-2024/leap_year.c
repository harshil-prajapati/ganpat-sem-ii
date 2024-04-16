#include<stdio.h>

int leap_year()
{
    int year;

    printf("Enter a Year : ");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        printf("%d is a leap year.\n", year);
    }
    else
    {
        printf("%d is not a leap year.\n", year);
    }

    return 0;
}

int main(){
    leap_year();

    return 0;
}