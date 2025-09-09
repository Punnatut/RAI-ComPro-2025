#include <stdio.h>
int main()
{
    int i,max,x=0;
    int array[] = {3,1,2,4,5,6};
    int *ptr = array;
    for(i=0;i<6;i++){
        ptr = &array[i];
        max = *ptr;
        if(max > x){
            x==max;
        }
    } 
    printf("Max value: %d",max);
    return 0;
}
