#include <stdio.h>

int main() 
{
    float h, r, v;
    printf("Enter cone height: ");
    scanf("%f", &h);
    printf("Enter cone base radius: ");
    scanf("%f", &r);

    v = 1/3*22/7*r*r*h ;

    printf("Cone volume = %.1f\n", v);

    if (v > 260){
        printf("This cone is perfect for Supun project");
    }
    else{
        printf("This cone is not fit for this project");
    }
return 0;
}