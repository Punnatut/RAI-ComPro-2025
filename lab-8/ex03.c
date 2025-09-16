#include <stdio.h>
#include <math.h>
int sum_square(int x, int y){
    return 2*x+2*y;
}
int main(){
int x,y;
    printf("Enter the two integers : ");
    scanf("%d %d",&x,&y);
    printf("Sum of squares of %d and %d is %d",x,y,sum_square(x,y));
    return 0;
}