#include <stdio.h>
void main()
{
    int a[50], i, j, n, sum=0, avg;
    printf("\nEnter array size:\n");
    scanf("%d", &n);
    printf("\nEnter array elements:\n");
    for(i=0;i<n;i++)
        scanf("%d", &a[i]);
    
    for(i=0;i<n;i++)
        sum = sum + a[i];
    avg = sum/n;

    printf("\nSum = %d\nAverage = %d", sum, avg);
}