// Make one ‘structure’ for student. The member elements are roll_no, name and percentage. Write a C program to store details of 5 students and display the same details on the screen. Find and display the student detail that got the highest percentage.
#include <stdio.h>

struct student {
    int roll_no;
    char name[50];
    float percentage;
};

int main() {

    int no;
    printf("How many students Detail You wnat to Enter ? ");
    scanf("%d",&no);
    
    struct student students[no];
    
    for (int i = 0; i < no; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Roll No: ");
        scanf("%d", &students[i].roll_no);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Percentage: ");
        scanf("%f", &students[i].percentage);
    }
    
    printf("\nDetails of all students:\n");
    for (int i = 0; i < no; i++) {
        printf("Student %d:\n", i + 1);
        printf("Roll No: %d\n", students[i].roll_no);
        printf("Name: %s\n", students[i].name);
        printf("Percentage: %.2f\n", students[i].percentage);
    }
    
    float max_percentage = students[0].percentage;
    int max_index = 0;
    for (int i = 1; i < no; i++) {
        if (students[i].percentage > max_percentage) {
            max_index = i;
        }
    }
    
    printf("\nStudent with the highest percentage:\n");
    printf("Roll No: %d\n", students[max_index].roll_no);
    printf("Name: %s\n", students[max_index].name);
    printf("Percentage: %.2f\n", students[max_index].percentage);
    
    return 0;
}