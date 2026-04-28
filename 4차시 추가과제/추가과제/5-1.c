
#include <stdio.h>

typedef struct sbox // 구조체 sbox 의 정의
{
    int mem1;
    int mem2;
    double mem3;
} SBox;

typedef union ubox // 공용체 ubox 의 정의
{
    int mem1;
    int mem2;
    double mem3;
} UBox;

int main(void)
{
    SBox sbox;
    UBox ubox;

    // 주소 비교
    printf("[struct] %p %p %p\n", &sbox.mem1, &sbox.mem2, &sbox.mem3); // 각각의 주소가 다름
	printf("[union] %p %p %p\n", &ubox.mem1, &ubox.mem2, &ubox.mem3); // 각각의 주소가 같음

    // 크기 비교
	printf("[struct] %d\n", sizeof(sbox)); // 16 (4 + 4 + 8)
	printf("[union] %d\n\n", sizeof(ubox)); // 8 (double이 가장 큰 멤버이므로 double의 크기인 8바이트가 공용체의 크기가 됨)

    // 메모리 공간 공유로 인한 출력값 확인
    ubox.mem1 = 10;
    printf("%d\n\n", ubox.mem2); // mem1에 값을 바꾸면 mem2의 값도 동일한 값으로 바뀜

    ubox.mem3 = 3.14;
	printf("%d\n", ubox.mem1); // mem3에 값을 바꾸면 mem1과 mem2의 값이 모두 바뀜
	printf("%d\n", ubox.mem2); // 자료값이 다르기 때문에 mem1과 mem2의 값이 모두 이상한 값이 나옴
    printf("%g\n", ubox.mem3);
}

