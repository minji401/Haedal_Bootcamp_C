#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
    int a;
    char str[1001];

    scanf("%d", &a);

    for (int i = 0; i < a; i++) {
        scanf("%s", str);

        int len = strlen(str);

        printf("%c%c\n", str[0], str[len - 1]);
    }

    return 0;
}