#include <stdio.h>

int main() 
{
    char n[100], g;
    float c, p, s, avg;

    printf("Enter your Name: ");
    scanf("%s", n);
    printf("Enter your Calculus score: ");
    scanf("%f", &c);
    printf("Enter your Physics score: ");
    scanf("%f", &p);
    printf("Enter your Science score: ");
    scanf("%f", &s);

    avg = (c+p+s)/3;

    if (avg>=50){
        if (avg <= 60){
            g = 'D';
        }
        else if (avg>60 && avg<=70){
            g = 'C';
        }
        else if (avg>70 && avg<=80){
            g = 'B';
        }
        else if (avg > 80 && avg <= 100){
            g = 'A';
        }   
    else{
        printf("F");
    }
    
    printf("%s, your average is %.2f. You got grade %c", n, avg, g);
    return 0;
    }
}