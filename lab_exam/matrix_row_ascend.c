#include<stdio.h>
void main()
{
    int a[50][50], r, c, i, j, n, temp[50], temp2;
    printf("\nEnter the row size of the matrix:\n");
    scanf("%d", &r);
    printf("\nEnter the column size of the matrix:\n");
    scanf("%d", &c);
    n = c*r;
    printf("\nEnter the elements of the matrix:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<r;j++)
        {
            printf("\nEnter element (%d, %d):", i+1, j+1);
            scanf("%d", &a[i][j]);
        }
    }
    int k=0;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {   
            temp[k++] = a[i][j];
        }
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(temp[j]>temp[j+1])
            {
                temp2 = temp[j+1];
                temp[j+1] = temp[j];
                temp[j] = temp2;
            }
        }
    }
    
    k=0;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {   
           a[i][j] = temp[k++];
        }
    }
    
    printf("\nThe sorted matrix is:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ", a[i][j]);
        }
    printf("\n");
    }
    printf("\n");
}