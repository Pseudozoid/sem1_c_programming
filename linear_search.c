#include <stdio.h>
void main ()
{
    int a[100], key, found=0, n, i, j, index;
    printf("\nEnter the size of the array:\n");
    scanf("%d", &n);

    printf("\nEnter the array elements:\n");
    for(i=0;i<n;i++)
        {
            scanf("%d", &a[i]);
        }
    printf("\nEnter the element to search for:\n");
    scanf("%d", &key);

    for(i=0;i<n;i++)
        {
            if (a[i] == key)
                {
                    found++;
                    index = i;
                }
        }

    if (found == 1)
        printf("\nThe element was %d found at position %d of the array\n", key, index+1);
    
    else if (found == 0)
        printf("\nThe element is not present in the array\n ");

    else   
        printf("\nThe element is %d present multiple times in the array\n", key);
}