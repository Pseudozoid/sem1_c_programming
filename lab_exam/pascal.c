#include <stdio.h>
void main()
{
    int i,j,s,c=1,row;
    printf("\nEnter the number of rows:\n");
    scanf("%d", &row);
    for(i=0;i<row;i++)
    {
        for(s=1;s<=row-i;s++)  
            printf("  ");
        for(j=0;j<=i;j++)
        {
            if(j==0||i==0)
                c=1;
            else
                c=c*(i-j+1)/j;
            printf("%4d", c);
        }
        printf("\n");
    }
}
