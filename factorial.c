#include <stdio.h>
void fact(int x)
{
    int sum=1, i;
    for (i=x;i>0;i--)
        sum = sum*i;
    printf("\nThe factorial is %d\n", sum);
}

void main()
{
    int n;
    printf("\nEnter a number:\n");
    scanf("%d", &n);
    fact(n);
}

