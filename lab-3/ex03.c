#include <stdio.h>

int main() 
{
    int num;
    printf("Enter a number :");
    scanf("%d", &num);
    switch (num >=1 && num <= 100)
    {
        case 1:
        switch (num % 2)
        {
            case 0 : printf("%d is even", num);
            break;
            case 1 : printf("%d is odd", num);
        }
        break;
    default :
    printf("%d is out of range", num);
    break;
    }
return 0;
}