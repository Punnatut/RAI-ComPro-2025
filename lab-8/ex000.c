#include <stdio.h>
#include <math.h>
float triangle_area(float a, float b, float c);
int main()
{
    float a,b,c,area;
    printf("A : ");
    scanf("%f",&a);
    printf("B : ");
    scanf("%f",&b);
    printf("C : ");
    scanf("%f",&c);
    area = triangle_area(a,b,c);
    printf("Area = %f\n", area);
    return 0;
}
float triangle_area(float a, float b, float c)
{
    float s = (a+b+c)/2;
    float area = sqrt(s*(s-a)*(s-b)*(s-c));
    return area;
}
