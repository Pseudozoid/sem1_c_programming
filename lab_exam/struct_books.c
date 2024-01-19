#include <stdio.h>
struct Book {
    char title[100];
    char author[100];
    int price;
};

void main()
{
   int n, i, high, low;
   printf("\nEnter the number of books:\n");
   scanf("%d", &n);

   struct Book book[n];
   for(int i=0;i<n;i++)
   {
    printf("\nEnter the details of Book %d:\n", i+1);
    printf("Title: ");
    scanf(" %[^\n]", book[i].title);
    printf("Author: ");
    scanf(" %[^\n]", book[i].author);
    printf("Price: ");
    scanf("%d", &book[i].price);
   }

    int largest = book[0].price;
    for(i=0;i<n;i++)
    {
        if (largest < book[i].price)
        {
            largest = book[i].price;
            high = i;

        }
    }

    int lowest = book[0].price;
    for(i=0;i<n;i++)
    {
        if (lowest >  book[i].price)
        {
            lowest = book[i].price;
            low = i;
        }
    }
    
    printf("\nThe most expensive book is:\n");
    printf("Title: %s", book[high].title);
    printf("\nAuthor: %s", book[high].author);
    printf("\nPrice: %d", book[high].price);
    printf("\n");
    printf("\nThe least expensive book is:\n");
    printf("Title: %s", book[low].title);
    printf("\nAuthor: %s", book[low].author);
    printf("\nPrice: %d", book[low].price);
}