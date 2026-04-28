#include <stdio.h>

int main() {
	int arr[2][3] = { {1, 2, 3}, {4, 5, 6} };

	// arr와 arr[0]의 주소값이 같다.
	printf("%p \n", arr);
	printf("%p \n", arr[0]);

	printf("sizeof(arr): %d \n", sizeof(arr)); // 2*3*4
	printf("sizeof(arr[0]: %d\n", sizeof(arr[0])); //arr[0]은 첫번째 행을 의미한다. 3*4
}