#include <stdio.h>
#include <math.h>
int NumPrime (int n)
{
    int i;
    if (n<2)
    return 0;
    for(i=2;i*i<=n;i++){
        if(n%i == 0)
        return 0;
    }
    return 1;
}
int main()
{
    int i,s,e;
    printf("Enter the start and end numbers : ");
    scanf("%d %d", &s,&e);
    printf("The prime numbers within the intervals are :\n");
    for(i=s;i<=e;i++){
    if(NumPrime (i)){
        printf("%d ", i);
    }
    }
    printf("\n");
    return 0;
}