#include <stdio.h>
int fib(int n)
{
    if(n==0)
        return 0;
    
    else if (n==1)
        return 1;
    
    else
        return (fib(n-1)+fib(n-2));
}

void main()
{
    int x, i;
    printf("\nEnter the number of terms to print\n");
    scanf("%d", &x);

    for(i=0;i<x;i++)
    printf("%d ", fib(i));
}