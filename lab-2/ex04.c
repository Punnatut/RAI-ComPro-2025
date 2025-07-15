#include <stdio.h>

int main() 
{
    char name[20];
    int id;
    float pgm, phy, ccl, gpa;

    printf("Enter your Name: ");
    scanf("%s", name);
    printf("Enter your student ID: ");
    scanf("%d", &id);
    printf("Enter your Programming score: ");
    scanf("%f", &pgm);
    printf("Enter your Physics score: ");
    scanf("%f", &phy);
    printf("Enter your Calculus score: ");
    scanf("%f", &ccl);

    gpa = (pgm + phy + ccl) / 3;
    printf("Hi %s(%d)! Your GPA is %.2f\n", name, id, gpa);

    return 0;
}