#include <stdio.h>

int main() 
{
    float rd;
    int l;
    float rs;
    float v;
    float area;
    float pi = 22/7;// pi = 3.14;
    printf("Enter Radius of Resistor (m) :");
    scanf("%f", &rd);
    printf("Enter Lenght of Resistor (m) :");
    scanf("%d", &l);
    printf("Enter Resistivity of Resistor (m) :");
    scanf("%f", &rs);
    area = pi*rd*rd;
    v = rs*l/area;
    printf("The value off this resister = %.2f OHM",v);
    return 0;
}