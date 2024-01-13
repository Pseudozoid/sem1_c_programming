#include <stdio.h>
#include <math.h>

void main()
{
    int terms;
    double angle, radians, sine_series = 0, cosine_series = 0;

    printf("Enter the angle in degrees: ");
    scanf("%lf", &angle);

    printf("Enter the number of terms: ");
    scanf("%d", &terms);

    // Convert angle to radians
    radians = angle * (M_PI / 180.0);

    // Calculate and print sine series
    printf("\nSine Series:\n");
    for (int i = 0; i < terms; i++)
    {
        double term = pow(-1, i) * pow(radians, 2 * i + 1) / tgamma(2 * i + 2);
        sine_series += term;
        printf("Term %d: %lf\n", i + 1, term);
    }

    printf("\nResulting Sine Value: %lf\n", sine_series);

    // Calculate and print cosine series
    printf("\nCosine Series:\n");
    for (int i = 0; i < terms; i++)
    {
        double term = pow(-1, i) * pow(radians, 2 * i) / tgamma(2 * i + 1);
        cosine_series += term;
        printf("Term %d: %lf\n", i + 1, term);
    }

    printf("\nResulting Cosine Value: %lf\n", cosine_series);
}
