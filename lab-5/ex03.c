#include <stdio.h>

int main() 
{
    int i, m[5], t=0 , h=0;
    for(i=0;i<5;i++){
    printf("Enter the marks of student %d : ", i+1);
    scanf("%d", &m[i]);
    t+=m[i];
    if(m[i]>h){
        h=m[i];
    }
    }
    printf("Total Marks : %d\n", t);
    printf("Highest Marks : %d\n", h);
    return 0;
}