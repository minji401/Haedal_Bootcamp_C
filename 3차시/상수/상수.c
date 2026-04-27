#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	int a, b,c,d;
	scanf("%d %d", &a, &b);

	c = a / 100 + (a % 100) % 10 * 100 + (a % 100 - (a % 100) % 10);
	d= b / 100 + (b % 100) % 10 * 100 + (b % 100 - (b % 100) % 10);

	if (c > d)
	{
		printf("%d", c);
	}
	else
	{
		printf("%d", d);
	}

	return 0;
}