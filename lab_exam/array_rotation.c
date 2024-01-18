#include <stdio.h>
void main()
{
    int a[50], b[50], n, r, i, j;
    printf("\nEnter the size of the array:\n");
    scanf("%d", &n);
    printf("\nEnter the array elements:\n");
    for(i=0;i<n;i++)
        scanf("%d", &a[i]);
    
    printf("\nEnter the value for rotation:\n");
    scanf("%d", &r);

    j = 0;
    for(i=n-r;i<n;i++)
    {
        b[j] = a[i];
        j++;
    }

    printf("\nElements to be rotated:\n");
    for(i=0;i<r;i++)
    {
        printf("%d ", b[i]);
    }

    printf("\n\nArray after rotation:\n");

    j = 0;
    for(i=r;i<n;i++)
    {
        b[i] = a[j];
        j++;
    }

    for(i=0;i<n;i++)
    {
        printf("%d ", b[i]);
    }
}