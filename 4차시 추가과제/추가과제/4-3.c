#include <stdio.h>


typedef struct
{
    int xpos;
    int ypos;
} Point; // struct Point > Point


int main(void)
{
    Point pos = { 10, 20 }; // sturct 안 써도 선언 가능

    printf("%d %d\n", pos.xpos, pos.ypos);
}