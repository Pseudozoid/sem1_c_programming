#include <stdio.h>
void main()
{
    int n, original, reversed = 0, reminder;
    printf("Enter a number:\n");
    scanf("%d", &n);
    original = n;
    while (n!=0)
    {
        reminder = n%10;
        reversed = reversed*10 + reminder;
        n = n/10;
    }
    if (reversed == original)
    printf("Palindrome");
    
    else
    printf("Not palindrome");
}
