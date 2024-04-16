// Write a C program to calculate the memory requirements of the following structure and union.
// struct student
// int eno;
// char name[20];
// float percentage;
// union student
// int eno;
// char name[20];
// float percentage;
#include <stdio.h>

struct student {
    int eno;
    char name[20];
    float percentage;
};

union student_union {
    int eno;
    char name[20];
    float percentage;
};

int main() {
    struct student s;
    union student_union u;

    printf("Size of struct student: %lu bytes\n", sizeof(s));
    printf("Size of union student_union: %lu bytes\n", sizeof(u));

    return 0;
}