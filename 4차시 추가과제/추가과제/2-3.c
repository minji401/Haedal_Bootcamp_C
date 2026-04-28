#include <stdio.h>

void printArr_ver1(int (*parr)[3], int row, int col) { //(*parr)[3] 배열 포인터?
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++)
			printf("%d ", parr[i][j]);
		printf("\n");
	}
}

void printArr_ver2(int parr[][3], int row, int col) { //parr[][3] 이거 뭐죠? 
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++)
			printf("%d ", parr[i][j]);
		printf("\n");
	}
}

int main() {
	int arr[2][3] = { {1, 2, 3}, {4, 5, 6} };
	int row = 0, col = 0;

	row = sizeof(arr) / sizeof(arr[0]); // (2*3*4) / (3*4)
	col = sizeof(arr[0]) / sizeof(int); // (3*4) / 4

	printArr_ver1(arr, row, col);
	printf("\n");
	printArr_ver2(arr, row, col);
}