#include <stdio.h>
int sum_even(int arr[],int n){
    int i,sum=0;
    for(i=0;i<n;i++){
        if (arr[i]%2==0)
            sum += arr[i];
        }
        return sum;
    }
int sum_odd(int arr[],int n){
    int i,sum=0;
    for(i=0;i<n;i++){
    if (arr[i]%2!=0)
            sum += arr[i];
        }
        return sum;
    }
int main(){
int i,n;
    printf("N: ");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        printf("Input: ");
        scanf("%d",&arr[i]);
    }
    printf("Sum of even number: %d\n",sum_even(arr,n));
    printf("Sum of odd number: %d\n",sum_odd(arr,n));
    return 0;
}