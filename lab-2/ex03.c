#include <stdio.h>

int main() 
{
    char n[20];
    int a;
    float h;
    int w;
    char g;
    char e[40];
    
    printf("Enter your Name: ");
    scanf("%s", n);
    printf("Enter your Age: ");
    scanf("%d", &a);
    printf("Enter your height: ");
    scanf("%f", &h);
    printf("Enter your weight: ");
    scanf("%d", &w);
    printf("Enter your gender: ");
    scanf(" %c", &g);
    printf("Enter your Education Qualification: ");
    scanf("%s", e);

    printf("\nName: %s\tAge: %d\tGender: %c\n", n, a, g);
    printf("Height: %.1f\tWeight: %d\n", h, w);
    printf("Education: %s\n", e);

    return 0;
}