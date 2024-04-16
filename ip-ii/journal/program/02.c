// Write a C program to make the function that receives the year as input and checks that the given year is leap year or not.
#include<stdio.h>

int leap_year(int year)
{

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

    int year;

    printf("Enter a Year : ");
    scanf("%d", &year);

    leap_year(year);

    return 0;
}