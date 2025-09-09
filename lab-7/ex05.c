#include <stdio.h>
int main()
{
    int i,sum=0;
    int size = 6;
    int array[] = {3,1,2,4,5,6};
    int *ptr = array;
    for(i=0;i<6;i++){
        ptr = &array[i];
        sum = sum+*ptr;
    }
    printf("The sum of array is: %d",sum);
    return 0;
}