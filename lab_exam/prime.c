#include <stdio.h>
void main()
{
    int c=0, n, i, j, low, up; 
    printf("\nEnter lower limit:\n");
    scanf("%d", &low);
    printf("\nEnter upper limit:\n");
    scanf("%d", &up);

    for(i=low;i<=up;i++)
    {   c = 0;
        for(j=2;j<=i;j++)
        {
            if (i%j == 0)
            c++;
       }
    if (c==1)
    printf("%d ", i);
    }
}