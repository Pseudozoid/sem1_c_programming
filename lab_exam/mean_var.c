#include <stdio.h>
#include <math.h>
float mean(float a[], int n)
{
    float mean,sum;
    for(int i=0;i<n;i++)
        sum = sum + a[i];
    mean = sum/n;
    return mean;
}

void stdVar(float a[], int n, float m)
{
    float varSum = 0, std, var;
    for(int i=0;i<n;i++)
    {
        varSum = varSum + pow((a[i]-m), 2);
    }
    var = varSum/n;
    std = sqrt(var);

    printf("\nVariance = %f\n", var);
    printf("Std. Deviation = %f\n", std);
}

void main()
{
    float a[50], m;
    int n,i;
    printf("\nEnter array size:\n");
    scanf("%d", &n);
    printf("\nEnter array elements:\n");
    for(i=0;i<n;i++)
        scanf("%f", &a[i]);
    m = mean(a, n);
    printf("\nMean = %f", m);
    stdVar(a, n, m);
}
