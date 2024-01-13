#include <stdio.h>
#include <math.h>

int main() {
    int n;
    double angle_degrees;

    // Get the number of terms from the user
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    // Get the angle in degrees from the user
    printf("Enter the angle in degrees: ");
    scanf("%lf", &angle_degrees);

    // Convert angle to radians
    double angle_rad = angle_degrees * M_PI / 180.0;

    // Initialize sine and cosine results
    double sine_result = 0.0;
    double cosine_result = 0.0;

    // Calculate the sine series
    printf("Sine Series:\n");
    double angle_power = 1.0;
    double factorial_term = 1.0;
    for (int i = 0; i < n; i++) {
        double term = pow(-1, i) * angle_power / factorial_term;
        sine_result += term;
        printf("%.6f ", term);

        // Update angle power and factorial for the next term
        angle_power *= angle_rad * angle_rad;
        factorial_term *= (2 * i + 2) * (2 * i + 1);
    }
    printf("\nSine Result: %.6f\n", sine_result);

    // Calculate the cosine series
    printf("Cosine Series:\n");
    angle_power = 1.0;
    factorial_term = 1.0;
    for (int i = 0; i < n; i++) {
        double term = pow(-1, i) * angle_power / factorial_term;
        cosine_result += term;
        printf("%.6f ", term);

        // Update angle power and factorial for the next term
        angle_power *= angle_rad * angle_rad;
        factorial_term *= (2 * i + 1) * (2 * i);
    }
    printf("\nCosine Result: %.6f\n", cosine_result);

    return 0;
}
