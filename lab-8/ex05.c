#include <stdio.h>
int sum_even(int arr[],int n){
    int i,sum=0;
    for(i=0;i<n;i++){
        if (arr[i]%2==0)
            sum += arr[i];
        }
    }
    return sum;
}
int sum_odd(int x, int y){
    int i,num,sum=0;
    for(i=1;i<=n;i++){
    printf("Input : %d", i);
        scanf("%d",&num);
        if(num%2==1){
            sum += num;
        }
    }
    return sum;
}
int main(){
int n;
    printf("Sum of even: %d\n",sum_even(n));
    printf("Sum of odd: %d\n",sum_odd(n));
    return 0;
}