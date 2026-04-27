#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num[9];
	for (int i = 0; i < 9; i++)
	{
		scanf("%d", &num[i]);
	}
	
	int a=0;
	int b = 0;

	for (int i = 0; i < 9; i++)
	{
		if (a < num[i])
		{
			a = num[i];
			b = i+1;
		}
		
	}
	printf("%d\n", a);
	printf("%d\n", b);

	return 0;
}