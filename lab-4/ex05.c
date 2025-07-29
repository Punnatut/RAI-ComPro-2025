#include <stdio.h>

int main() 
{
    int n, f = 1;
    printf("Enter the number : ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i=i+1)
    {
        f=f*i;
    }
    printf("Factorial of %d is %d", n,f);
return 0;
}