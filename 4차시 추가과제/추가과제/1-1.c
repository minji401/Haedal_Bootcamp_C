#include <stdio.h>

int main() {
	double num = 3.14;
	double* ptr = &num;	// num의 주소값 저장
	double** dptr = &ptr;	// ptr의 주소값 저장
	double* ptr2;

	printf("%p %p \n", ptr, *dptr); // ptr == *dptr
	printf("%.2lf %.2lf \n", num, **dptr); // num == **dptr

	ptr2 = *dptr; // ptr2 == ptr
	*ptr2 = 10.99; // *ptr2 == *ptr == num

	printf("%.2lf %.2lf\n", num, **dptr); // num == **dptr == 10.99
}