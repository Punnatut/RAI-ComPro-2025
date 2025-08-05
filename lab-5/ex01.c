#include <stdio.h>

int main() 
{
    int v[10], i;
    for(i=0;i<10;i++){
    printf("Enter the value %d here : ", i+1);
    scanf("%d", &v[i]);
    }
    printf("Values in array are : ");
    for(i=0;i<10;i++){
    printf("%d", v[i]);
    if(i<9){
        printf(", ");
    }
    }
return 0;    
}