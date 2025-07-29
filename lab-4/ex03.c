#include <stdio.h>

int main() 
{
    int n = 1, o, e;
    do
    {
        printf("\nEnter the number : ");
        scanf("%d", &n);
        if (n == 0){
        printf("Exiting Program...Bye");
        }
        else if (n%2 == 0){
            printf("%d is even", n);
        }
        else{
            printf("%d is odd", n);
        } 
    }    
    while(n<=100);

return 0;
}