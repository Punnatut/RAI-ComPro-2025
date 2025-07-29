#include <stdio.h>

int main() 
{
    int num1,num2,mn,ans;
    printf("Enter Num1 : ");
    scanf("%d", &num1);
    printf("Enter Num2 : ");
    scanf("%d", &num2);
    printf("Calculation menu : \n1.+\n2.-\n3.*\n4./\nChoose menu : ");
    scanf("%d", &mn);
    if(mn == 1){
        ans=num1+num2;
        printf("Ans : Num1 + Num2 = %d", ans);
    }
    else if(mn == 2){
        ans=num1-num2;
        printf("Ans : Num1 - Num2 = %d", ans);
    }
    else if(mn == 3){
        ans=num1*num2;
        printf("Ans : Num1 * Num2 = %d", ans);
    }
    else if(mn == 4){
        ans=num1/num2;
        printf("Ans : Num1 / Num2 = %d", ans);
    }
return 0;
}
