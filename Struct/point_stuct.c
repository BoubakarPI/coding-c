#include <stdio.h>

struct Point {
    int x, y;
};

int main(void) {

struct Point p1 ={0,1};
/* Bonjou*/
struct Point *p2 = &p1;

printf("X = %d, Y = %d \n", p2->x, p2->y);
}