#include <stdio.h>
void main()
{
    int high, low, mid, n, a[100], i, j, temp, key;
    printf("\nEnter size of the array:\n");
    scanf("%d", &n);
    
    printf("\nEnter the array elements:\n");
    for(i=0;i<n;i++)
        scanf("%d", &a[i]);

    printf("\nEnter the element to find:\n");
    scanf("%d", key);

    low = 0;
    high = n - 1;
    mid = (high+low)/2;
    
    while (low <= high)
        {
            if(a[mid]<key)
                low = mid + 1;
            
            else if(a[mid] == key)
                {
                    printf("\nThe element is present at position %d", mid);
                    break;
                }
                
            else
                high = mid - 1;
        
        mid = (high + low)/2;
        }
    if(low>high)
            printf("\nElement not found in the array\n"); 
}