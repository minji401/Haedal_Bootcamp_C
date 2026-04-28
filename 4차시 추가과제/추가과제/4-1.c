#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

struct point // 구조체 선언
{
	int xPos;
	int yPos;
};

int main(void)
{
	struct point pos1, pos2;
	double distance;

	printf("point1 pos: ");
	scanf("%d %d", &pos1.xPos, &pos1.yPos);

	printf("point2 pos: ");
	scanf("%d %d", &pos2.xPos, &pos2.yPos);

	distance = sqrt((double)(pow(pos1.xPos - pos2.xPos, 2) + pow(pos1.yPos - pos2.yPos, 2))); // sqrt 제곱근, pow 거듭제곱  거리 계산
	printf("distance: %g입니다.\n", distance);
}

