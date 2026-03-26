#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int x;
    int y;
    scanf("%d", &x);
    scanf("%d", &y);

    printf("%d\n", x + y);
    printf("%d\n", x - y);
    printf("%d\n", x * y);
    printf("%d\n", x / y);
    printf("%d\n", x % y);
    return 0;
}