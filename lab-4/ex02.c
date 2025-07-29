#include <stdio.h>

int main() 
{
    int i = 1, n, s = 0;
    while(i<=10)
    {
    printf("Enter the number : ");
    scanf("%d", &n);
        s += n; 
        i++;
    }    
    printf("Total sum is %d", s);

return 0;
}