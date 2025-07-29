#include <stdio.h>

int main() 
{
    int i = 2, sum = 0;
    do{
        sum = sum + i;
        i+=2;
    }
    while(i<=100);
    printf("summation of even numbers from 1 to 100 = %d", sum);
    return 0;
}