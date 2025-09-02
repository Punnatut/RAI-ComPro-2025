#include <stdio.h>
#include <math.h>
int main() 
{
    int i;
    float d;
    struct axis{
        float x,y;
    }a[2];
    for(i=1;i<3;i++){
        printf("x%d : ",i);
        scanf("\n%f",&a[i].x);
        printf("y%d :",i);
        scanf("\n%f",&a[i].y);
    }
d = sqrt((a[2].x-a[1].x)*(a[2].x-a[1].x)+(a[2].y-a[1].y)*(a[2].y-a[1].y));
printf("Distance between (%.f,%.f) and (%.f,%.f) is %.3f units", a[1].x,a[1].y,a[2].x,a[2].y,d);
return 0;
}