#include <stdio.h>

int main() 
{
    char y[2001];
    fgets(y, 2000, stdin);
    printf("%s", y);
    return 0;
}