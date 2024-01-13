#include <stdio.h>
#include <string.h>
void main()
{
    char names[50][50], temp[50]; 
    int i, j, n;
    printf("\nEnter the number of names to be entered\n");
    scanf("%d", &n);
    printf("\nEnter the names:\n");
    for(i=0;i<n;i++)
        scanf("%s", names[i]);
    
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if (strcmp(names[i], names[j])>0)
            {
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }

    printf("\nThe sorted order is:\n");
    for(i=0;i<n;i++)
        printf("%s\n", names[i]);
}