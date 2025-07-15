#include <stdio.h>

int main() 
{
    int a, b, c;
    int min, max, sum;
    float avg;

    printf("Enter integer #1: ");
    scanf("%d", &a);
    printf("Enter integer #2: ");
    scanf("%d", &b);
    printf("Enter integer #3: ");
    scanf("%d", &c);

    min = a;
    if (b < min) min = b;
    if (c < min) min = c;

    max = a;
    if (b > max) max = b;
    if (c > max) max = c;
    
    sum = a + b + c;
    avg = sum / 3.0f;

    printf("Results:\n");
    printf("Minimum: %d\n", min);
    printf("Maximum: %d\n", max);
    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", avg);

    return 0;
}