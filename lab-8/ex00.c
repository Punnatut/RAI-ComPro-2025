#include <stdio.h>
void call_name (int n)
{
    int i;
    for(i=0;i<n;i++){
        printf("%s\n","Punnatut");
    }
}
    int main()
{
    int num=5;
    call_name(num);
    return 0;
}