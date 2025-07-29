#include <stdio.h>

int main() 
{
    int n, s = 0, avg;
    for(int i = 1; i <= 10; i++)
    {
        printf("Enter the number : ");
        scanf("%d", &n);
        s = s + n;
    }    
    avg = s%10;
    printf("total sum is %d", s);
    printf("\nAverage is %d", avg);

return 0;
}