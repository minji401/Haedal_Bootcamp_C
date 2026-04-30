#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	int a, max;
	int* arr;

	printf("숫자 개수: ");
	scanf("%d", &a);

	arr = (int*)malloc(sizeof(int) * a);

	if (arr == NULL)
	{
		printf("실패\n");
		exit(1);
	}
	
	for (int i = 0; i < a; i++)
	{
		printf("%d번째 숫자: ", i+1);
		scanf("%d", &arr[i]);
	}

	max = arr[0];
	for (int i = 0; i < a; i++)
	{
		if (max < arr[i])
			max = arr[i];
	}

	printf("최댓값: %d", max);
	
	free(arr);
	return 0;
}