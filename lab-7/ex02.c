#include <stdio.h>
int main()
{
    int a = 0, b = 5;
    int *ptra,*ptrb;
    ptra = &a;
    ptrb = &b;
    printf("Before reverse : a = %d, b = %d\n",*ptra,*ptrb);
    printf("After reverse : a = %d, b = %d\n",*ptrb,*ptra);
    return 0;
}