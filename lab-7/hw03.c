#include <stdio.h>
int main()
{
    int n[3],*ptr=n;
    printf("Enter 2 Values : ");
    scanf("%d %d",ptr,ptr+1);
    *(ptr+2)=*ptr+*(ptr+1);
    printf("First : %d\n",*ptr);
    printf("Second : %d\n",*(ptr+1));
    printf("Third : %d\n",*(ptr+2));
    return 0;
}