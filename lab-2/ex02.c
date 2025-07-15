#include <stdio.h>

int main() 
{
    char ilph[11] = {'I','L','O','V','E','P','H','O','O','M','\0'};
    for (int x = 9; x >= 0; x--) 
    {
        printf("%c\n", ilph[x]);
    }
    return 0;
}