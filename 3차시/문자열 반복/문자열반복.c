#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	int a,b;
	char str[20];
	scanf("%d\n", &a);
	

	for (int i = 0; i < a; i++)
	{
		scanf("%d %s", &b, str);
		for (int k = 0; k < strlen(str); k++)
		{
			for (int j = 0; j < b; j++)
			{
				printf("%c", str[k]);

			}
		}
		printf("\n");
	}
	return 0;
}