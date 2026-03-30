//홀수 짝수 판별
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n;
	printf("정수 입력 : ");
	scanf("%d", &n);

	if (n % 2 != 0)
		printf("홀수");
	else
		printf("짝수");
	return 0;

}