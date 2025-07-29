#include <stdio.h>

int main() 
{
    int n, m;
    printf("Enter the number : ");
    scanf("%d", &n);
    printf("Multiplication Table for");
    for(int i = 1; i <= 12; i++)
    {
    m=n*i;
    printf("\n%d x %d = %d", n, i, m);
    }    
return 0;
}