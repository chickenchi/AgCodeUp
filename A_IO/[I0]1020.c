#include <stdio.h>

int main()
{
    int y, m, d, t;
    scanf("%02d%02d%02d-%d", &y, &m, &d, &t);
    printf("%02d%02d%02d%d", y, m, d, t);
    return 0;
}
