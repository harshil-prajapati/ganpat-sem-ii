// Write a C program to make the following structure and read the value for member elements of structure and also print the same on the screen. The structure tag is ‘book’ and members' names are bookno, bookname, author, quantity, and price.
#include <stdio.h>

struct book {
    int bookno;
    char bookname[100];
    char author[100];
    int quantity;
    float price;
};

int main() {
    struct book my_book;
    
    printf("Enter book number : ");
    scanf("%d", &my_book.bookno);
    
    printf("Enter book name : ");
    scanf("%s", my_book.bookname);
    
    printf("Enter author : ");
    scanf("%s", my_book.author);
    
    printf("Enter quantity : ");
    scanf("%d", &my_book.quantity);
    
    printf("Enter price : ");
    scanf("%f", &my_book.price);
    
    printf("\nBook Details\n");
    printf("Book Number : %d\n", my_book.bookno);
    printf("Book Name : %s\n", my_book.bookname);
    printf("Author : %s\n", my_book.author);
    printf("Quantity : %d\n", my_book.quantity);
    printf("Price : %.2f\n", my_book.price);
    
    return 0;
}