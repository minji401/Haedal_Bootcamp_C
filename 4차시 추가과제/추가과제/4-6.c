#include <stdio.h>

typedef struct point
{
    int xpos;
    int ypos;

    // 다른 point 변수와 연결하기 위한 포인터 변수
    struct point* ptr; 
} Point;

int main(void)
{
    Point pos1 = { 1, 1 };
    Point pos2 = { 2, 2 };
    struct point pos3 = { 3, 3 };

    // point 구조체 변수들을 연결, 자기 참조 구조체
    pos1.ptr = &pos2;  // pos1과 pos2 연결
    pos2.ptr = &pos3;  // pos2과 pos3 연결
    pos3.ptr = &pos1;  // pos3과 pos1 연결

    printf("point relation\n");
    printf("[%d, %d] and [%d, %d]\n",
        pos1.xpos, pos1.ypos, pos1.ptr->xpos, pos1.ptr->ypos); // 1 1 2 2
    printf("[%d, %d] and [%d, %d]\n",
		pos2.xpos, pos2.ypos, pos2.ptr->xpos, pos2.ptr->ypos); // 2 2 3 3
    printf("[%d, %d] and [%d, %d]\n",
		pos3.xpos, pos3.ypos, pos3.ptr->xpos, pos3.ptr->ypos); // 3 3 1 1
}