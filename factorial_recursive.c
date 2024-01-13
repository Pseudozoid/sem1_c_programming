#include <stdio.h>
int fact(int x)
{
    if(x<=1 || x ==0)
        return 1;
    else
        return x*fact(x-1);
}

void main()
{
    int n, f;
    printf("\nEnter a number:\n");
    scanf("%d", &n);
    f = fact(n);
    printf("\nFactorial = %d", f);
}

