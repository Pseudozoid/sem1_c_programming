#include <stdio.h>
void main()
{
    int n, sum=0, rem;
    printf("\nEnter a number:\n");
    scanf("%d", &n);

    while(n>0)
    {
        rem = n % 10;
        sum = sum + rem;
        n = n/10; 
    }
    printf("\nSum of digits = %d", sum);
}
