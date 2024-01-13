#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("\nEnter array elements:\n");
    for (int i = 0; i < n;i++) {
        scanf("%d", &arr[i]);
    }

    int key;
    printf("Enter the element to search for: ");
    scanf("%d", &key);
    int *ptr = arr;


    int c = 0;
    for (int i = 0; i < n; ++i) {
        if (*ptr == key) {
            c++;
        }
        ptr++;
    }

    printf("The element %d occurs %d times in the array.\n", key, c);

    return 0;
}
