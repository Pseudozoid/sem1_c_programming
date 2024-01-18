#include <stdio.h>
int sum(int a[], int x)
{
    if (x == 0)
        return a[0];
    else
        return (a[x]) + sum(a, x-1); 
}

void main()
{
    int a[50], n, x;
    printf("\nEnter the size of the array:\n");
    scanf("%d", &n);
    x = n-1;
    printf("\nEnter the array elements:\n");
    for(int i=0;i<n;i++)
        scanf("%d", &a[i]);
    int result = sum(a, x);
    printf("\nSum of the array elements = %d\n", result);
}