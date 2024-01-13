#include <stdio.h>
#include <math.h>

void main()
{
    int a, b, c;
    int disc;
    double root1, root2;

    printf("\nEnter the value of a, b and c:\n");
    scanf("%d%d%d", &a, &b, &c);

    disc = (b * b) - (4 * a * c);

    if (disc > 0)
    {
        root1 = (-b + sqrt(disc)) / (2 * a);
        root2 = (-b - sqrt(disc)) / (2 * a);
        printf("\nThe roots are %lf and %lf", root1, root2);
    }
    else if (disc == 0)
    {
        printf("\nEqual real roots\n");
        root1 = -b / (2.0 * a);
        printf("Both roots are %lf", root1);
    }
    else
        printf("\nThe roots are imaginary\n");
}
