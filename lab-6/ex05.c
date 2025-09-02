#include <stdio.h>
int main(){
    int i,tt;
    struct time{
        int minute,seconds;
    }t[10];
    for(i=1;i<4;i++){
    printf("Time input (m:s) :");
    scanf("%d:%d",&t[i].minute,&t[i].seconds);
    }
    tt = (t[0].minute+t[1].minute+t[2].minute)*6 +t[0].seconds+t[1].seconds+t[2].seconds;
    printf("Total time elasped: %d second(s)",tt);
    return 0;
}