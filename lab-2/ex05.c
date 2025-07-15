#include <stdio.h>

int main() 
{
    char n[30];
    int a;
    float h;
    char u[50];

    printf("Enter your full name: ");
    scanf(" %[^\n]", n);
    printf("Enter your age: ");
    scanf("%d", &a);
    printf("Enter your height: ");
    scanf("%f", &h);
    printf("Enter you University name: ");
    scanf(" %[^\n]", u);
    printf("\nHi! Everyone. This is K.%s from %s. I am %d years old and my height is %.1f cm tall.\n", n, u, a, h);

    return 0;
}