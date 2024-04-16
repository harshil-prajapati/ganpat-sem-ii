// Write a C program to create structure called Employee. Member elements are eno, ename, basicsalary. Enter the details of 5 employees and prepare one calculatesalary() function and calculate the salary components like DA, HRA, MA, Net Salary, PT, Gross Salary for each employee with calculatesalary() function.
#include <stdio.h>

struct Employee {
    int eno;
    char ename[50];
    float basicsalary;
    float DA;
    float HRA;
    float MA;
    float NetSalary;
    float PT;
    float GrossSalary;
};

void calculatesalary(struct Employee *emp) {
    emp->DA = 0.2 * emp->basicsalary;
    emp->HRA = 0.15 * emp->basicsalary;
    emp->MA = 0.1 * emp->basicsalary;
    emp->NetSalary = emp->basicsalary + emp->DA + emp->HRA + emp->MA;
    emp->PT = 0.1 * emp->NetSalary;
    emp->GrossSalary = emp->NetSalary - emp->PT;
}

int main() {
    struct Employee emp[5];
    
    for (int i = 0; i < 5; i++) {
        printf("Enter details for Employee %d :\n", i + 1);
        printf("Employee Number : ");
        scanf("%d", &emp[i].eno);
        printf("Employee Name : ");
        scanf("%s", emp[i].ename);
        printf("Basic Salary : ");
        scanf("%f", &emp[i].basicsalary);
        calculatesalary(&emp[i]);
    }
    
    printf("\nEmployee Details and Salary Components:\n");
    for (int i = 0; i < 5; i++) {
        printf("\nEmployee %d :\n", i + 1);
        printf("Employee Number : %d\n", emp[i].eno);
        printf("Employee Name : %s\n", emp[i].ename);
        printf("Basic Salary : %.2f\n", emp[i].basicsalary);
        printf("DA : %.2f\n", emp[i].DA);
        printf("HRA : %.2f\n", emp[i].HRA);
        printf("MA : %.2f\n", emp[i].MA);
        printf("Net Salary : %.2f\n", emp[i].NetSalary);
        printf("PT : %.2f\n", emp[i].PT);
        printf("Gross Salary : %.2f\n", emp[i].GrossSalary);
    }
    
    return 0;
}