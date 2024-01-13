#include <stdio.h>
int sequential(int a[], int key, int n)
{
    int flag=0, index;
    for (int i=0;i<n;i++)
    {
        if (key==a[i])
        {
            flag++;
            index = i;
        }
    }
    if (flag==1)
        printf("\nThe element %d was found at position %d\n", key, index+1);
    else if (flag==0)
        printf("\nThe element was not found in the array\n");
    else
        printf("\nThe element occurs multiple times in the array\n");
    
    return 0;
}

int binary(int a[], int key, int n)
{
    int low, mid, high;
    low = 0;
    high = n-1;
    while(low<=high)
    {
        mid = (low+high)/2;
        
        if(key>a[mid])
            low = mid + 1;
        
        else if(key==a[mid])
        {
            printf("\nThe element %d was found at position %d\n", key, mid+1);
            break;
        }

        else
            high = mid - 1;
    }
    if (low>high)
        printf("\nThe element was not found in the array\n");

    return 0;
}

void main()
{
    int a[100], key, n, choice=1, x=1, temp;
    
    do
    {
        printf("\nEnter the size of the array:\n");
        scanf("%d", &n);
        printf("\nEnter the array elements:\n");
        for(int i=0;i<n;i++)
            scanf("%d", &a[i]);
        printf("\nEnter the term to search for:\n");
        scanf("%d", &key);

        printf("\n1 --> Sequential Search\n2 --> Binary Search\n");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
            {
                sequential(a, key, n);
                break;
            }

            case 2:
            {
                for(int i=0;i<n;i++)
                {
                    for(int j=0;j<n-i-1;j++)
                    {
                        if(a[j]>a[j+1])
                        {
                            temp = a[j];
                            a[j] = a[j+1];
                            a[j+1] = temp;
                        }
                    }               
                }

                printf("\nThe sorted order of the array is:\n");
                for(int i=0;i<n;i++)
                    printf("%d ", a[i]);

                binary(a, key, n);
                break;
            }

            default:
                printf("\nInvalid Input\n");
        }
        printf("\nDo you wish to continue?\n");
        printf("1 --> Yes\n0 --> Exit\n");
        scanf("%d", &x);
    } while(x!=0);

}