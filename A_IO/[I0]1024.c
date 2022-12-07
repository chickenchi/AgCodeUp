#include <stdio.h>
char a[20];
int i, b;
int main() 
{
    scanf("%s", a, 20);
    for (i = 0; i < 20; i++)
        if (a[i] != b)
            printf("\'%c\'\n", a[i]);
    return 0;
}