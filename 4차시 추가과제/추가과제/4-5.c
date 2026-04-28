#include <stdio.h>

typedef struct
{
    int xpos;
    int ypos;
} point; // struct point > point

int main(void)
{
    point pos1 = { 1, 2 };
    point pos2 = { 100, 200 };
	point* pptr = &pos1; // pos1 주소값 pptr에 저장

    // 방법 1
    (*pptr).xpos += 4; // pos1의 xpos에 +4, ypos에 +5
    (*pptr).ypos += 5;
    printf("[%d, %d]\n", pptr->xpos, pptr->ypos);

    // 방법 2
	pptr = &pos2; // pos2 주소값 pptr에 저장
	pptr->xpos += 1; // pos2의 xpos에 +1, ypos에 +2
    pptr->ypos += 2;
    printf("[%d, %d] \n", (*pptr).xpos, (*pptr).ypos);
}