#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int n;

void hanoi(int n, int from, int to, int via) {
    if (n == 1) {
        printf("%d %d\n", from, to);
        return;
    }
    hanoi(n - 1, from, via, to);
    printf("%d %d\n", from, to);
    hanoi(n - 1, via, to, from);
}

int main()
{
    int N;
    int k = 1;
    scanf("%d", &N);

    for (int i = 1; i <= N; i++)
    {
        k *= 2;
    }

    
    printf("%d\n", k - 1);
    hanoi(N, 1, 3, 2);
	return 0;
}