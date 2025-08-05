#include <stdio.h>

int main() 
{
    int i, num[8], s=0 , l=0;
    for(i=0;i<8;i++){
    printf("Enter number %d : ", i+1);
    scanf("%d", &num[i]);
    if(num[i]>l){
        l=num[i];
    }
    else if(num[i]<l){
        s=num[i];
    }
    }
    printf("Smallest number: %d\n", s);
    printf("Largest number: %d\n", l);
    return 0;
}