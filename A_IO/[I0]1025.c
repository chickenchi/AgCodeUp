#include <stdio.h>

int main()
{
    int a,t=0;
    for(int i=10000; i>0; i/=10)
    {
        scanf("%1d", &a);
        printf("[%d]\n", a*i);
    }
    return 0;
}