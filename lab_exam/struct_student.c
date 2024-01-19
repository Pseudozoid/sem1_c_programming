#include <stdio.h>
#include <string.h>

struct Student {
    char name[100];
    int roll;
    int marks;
};

void main()
{
    int n, i, j, top, index;
    printf("\nEnter the number of students:");
    scanf("%d", &n);

    struct Student s[n];
    printf("\nEnter the details of each student\n");
    for(i=0;i<n;i++)
    {   
        printf("\nStudent %d ", i+1);
        printf("\nName: ");
        scanf(" %[^\n]", s[i].name);
        printf("Roll Number: ");
        scanf("%d", &s[i].roll);
        printf("Marks: ");
        scanf("%d", &s[i].marks);
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if (s[j].marks > s[j+1].marks)
            {
                struct Student temp = s[j+1];
                s[j+1] = s[j];
                s[j] = temp;
            }
        }
    }

    top = s[n-1].marks;
    printf("\nSorted list of students based on marks:\n");
    printf("Name\t\tRoll No.\tMarks\n");
    printf("-------------------------------------");
    for(i=0;i<n;i++)
    {
        printf("\n%s\t\t%d\t\t%d\n", s[i].name, s[i].roll, s[i].marks);
    }
    printf("\n%s [Roll no - %d] scored the highest with %d marks\n", s[n-1].name, s[n-1].roll, top);
}