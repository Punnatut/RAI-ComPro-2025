#include <stdio.h>
int main() 
{
    struct axis{
    float x,y;
}a[2];
    printf("u_x : ");
    scanf("\n%f",&a[0].x);
    printf("u_y :");
    scanf("\n%f",&a[0].y);
    printf("v_x : ");
    scanf("\n%f",&a[1].x);
    printf("v_y :");
    scanf("\n%f",&a[1].y);
    printf("Resultant vector is equvalent to %.fi + %.fj",a[0].x+a[1].x,a[0].y+a[1].y);
    return 0;
}