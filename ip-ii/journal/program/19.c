// Write a C program that accesses the members of a structure book by using pointers.
#include <stdio.h>

// Define the structure 'book'
struct book
{
    int bookID;
    char title[50];
    char author[50];
    float price;
};

int main()
{
    // Declare a variable of type 'book'
    struct book myBook = {101, "The Great Gatsby", "F. Scott Fitzgerald", 12.5};

    // Declare a pointer to a 'book' structure and initialize it with the address of 'myBook'
    struct book *ptr = &myBook;

    // Accessing members of 'myBook' using the pointer 'ptr'
    printf("Book ID: %d\n", ptr->bookID);
    printf("Title: %s\n", ptr->title);
    printf("Author: %s\n", ptr->author);
    printf("Price: $%.2f\n", ptr->price);

    return 0;
}