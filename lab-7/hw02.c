#include <stdio.h>
int main()
{
    float x=1.0,y=2.0;
    float *ptrx=&x,*ptry=&y;
    printf("Before : x = %.2f, y = %.2f\n",*ptrx,*ptry);
    printf("After : x = %.2f, y = %.2f\n",*ptry,*ptrx);
    return 0;
}