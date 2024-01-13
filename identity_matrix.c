#include <stdio.h>
void main()
{
    int i, j, mat[100][100], r, c;
    printf("\nEnter row and column size:");
    scanf("%d%d", &r, &c);

    if (r != c)
        printf("Invalid matrix");
    else
    {
        for (i=0;i<r;i++)
        {
            mat[i][i] = 1;
        }

        for (i=0;i<r;i++)
        {
            for (j=0;j<c;j++)
            {
                if (i != j)
                mat[i][j] = 0;
            }
        }

        printf("\n");
        for (i=0;i<r;i++)
        {
            for (j=0;j<c;j++)
            {
                printf("%d ", mat[i][j]);
            }
            printf("\n");
        }
    }
}