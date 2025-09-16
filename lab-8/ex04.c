#include <stdio.h>
int vowels(char c){
    if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U'){
        return 1;
    }
    return 0;
    }
int cvowels(char str[]){
    int count=0,i=0;
    while(str[i]!='\0'){
        if (vowels(str[i])){
            count++;
        }
        i++;
    }
    return count;
}
int main(){
    char str[100];
    printf("Input: ");
    scanf("%s", str);
    int  v=cvowels(str);
    printf("Output: Number of vowels: %d\n",v);
    return 0;
}