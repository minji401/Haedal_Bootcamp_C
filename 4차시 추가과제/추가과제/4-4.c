#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
struct point
{
    int xpos;
    int ypos;
};

int main(void)
{
    struct point arr1[3]; 
    struct point arr2[3] = { {0, 0}, {2, 3}, {5, 4} }; 


    for (int i = 0; i < 3; i++) {
        printf("Input xpos, ypos: ");
		scanf("%d %d", &arr1[i].xpos, &arr1[i].ypos); // arr1[3] = { {xpos1, ypos1}, {xpos2, ypos2}, {xpos3, ypos3} }
    }

    printf("arr1: ");
    for (int i = 0; i < 3; i++) {
        printf("[%d, %d] ", arr1[i].xpos, arr1[i].ypos);
    }
    printf("\n");

    printf("arr2: ");
    for (int i = 0; i < 3; i++) {
        printf("[%d, %d] ", arr2[i].xpos, arr2[i].ypos);
    }
    printf("\n");
}