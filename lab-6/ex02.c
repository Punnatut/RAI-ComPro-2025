#include <stdio.h>

int main() 
{
    int i;
    struct profile{
        char name[100];
        int age;
        float score;
    }s[3];
    for(i=1;i<4;i++){
        printf("Student %d\'s name:",i);
        scanf("\n%[^\n]",s[i].name);
        printf("Student %d\'s age:",i);
        scanf("\n%d",&s[i].age);
        printf("Student %d\'s score:",i);
        scanf("\n%f",&s[i].score);
    }
    if (s[0].score > s[1].score && s[0].score > s[2].score){
        printf("The highest scores belongs to %s at %f score",s[0].name,s[0].score);
    }
    else{
        if (s[1].score > s[0].score && s[1].score > s[2].score){
        printf("The highest scores belongs to %s at %f score",s[1].name,s[1].score);
        }
        else if(s[2].score > s[0].score && s[2].score > s[1].score){
        printf("The highest scores belongs to %s at %f score",s[2].name,s[2].score);
    }
    }
    return 0;
    }