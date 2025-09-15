#include <stdio.h>
int main()
{
    int i,r,c,A[3][3],*ptr=&A[0][0];
    for(i=0;i<9;i++){
        *(ptr+i)=i+1;
    }
    for(r=0;r<3;r++){
        for(c=0;c<3;c++){
            printf("%2d",*(ptr+r*3+c));
        }
        printf("\n");
    }
   return 0;
}