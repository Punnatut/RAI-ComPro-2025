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
    for(i=1;i<4;i++){
        printf("\nStudent %d name is \"%s\", age %d.",i,s[i].name,s[i].age);
    }
    return 0;
}