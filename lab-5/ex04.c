#include <stdio.h>

int main() 
{
    int i, v[10], o=0 , e=0;
    for(i=0;i<10;i++){
        printf("Enter value %d : ", i+1);
        scanf("%d", &v[i]);
    if (v[i]%2 == 0){
        e++;
    }
    else{
        o++;
    }
    }
    printf("Even numbers : %d\n", e);
    printf("Ood numbers : %d\n", o);
    return 0;
}