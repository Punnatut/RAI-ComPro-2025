#include <stdio.h>

int main() 
{
    int inte;
    float fvalue;
    char c;

    printf("Please enter an integer value: ");
    scanf("%d", &inte);
    printf("You entered %d\n", inte);
    printf("Please enter a float value: ");
    scanf("%f", &fvalue);
    printf("You entered %.2f\n", fvalue);
    printf("Please enter a character: ");
    scanf(" %c", &c);
    printf("You entered %c\n", c);
    
    return 0;
}