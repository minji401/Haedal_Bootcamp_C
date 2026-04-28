#include <stdio.h>

struct person 
{
	char name[20];
	char phoneNum[20];
	int age;
};

int main(void)
{
	struct person man = { "Tom", "010-1234-5678", 20 }; // 구조체 변수 선언과 동시에 초기화
	printf("%s %s %d\n", man.name, man.phoneNum, man.age);
}