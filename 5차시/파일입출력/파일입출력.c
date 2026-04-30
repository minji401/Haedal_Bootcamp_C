#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE* org = fopen("input.txt", "rt");
	FILE* copy = fopen("output.txt", "wt");
	char str[100];


	if (org == NULL || copy == NULL)
	{
		printf("파일 열기 실패\n");
		exit(1);
	}

	printf("------------------------\n");
	while (fgets(str, sizeof(str), org) != NULL)
	{
		printf("복사한 문자: \n");
		printf("%s\n", str);
		fputs(str, copy);
	}
	printf("------------------------\n");

	if (feof(org) != 0)
	{
		printf("파일 복사 성공");
	}
	else
	{
		printf("파일 복사 실패");
	}
	
	fclose(org);
	fclose(copy);

	return 0;
}