#include <stdio.h>

int main() {
	int arr[2][3] = { {1, 2, 3}, {4, 5, 6} };

	printf("%d %d\n", *(*(arr + 1) + 0), *(*(arr + 1) + 1)); //?????

	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
		for (int j = 0; j < sizeof(arr[0]) / sizeof(int); j++)
			printf("%d ", *(*(arr + i) + j));
		printf("\n");
	}

}