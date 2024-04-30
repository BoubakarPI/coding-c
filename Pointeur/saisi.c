#include <stdio.h>

int main(void) {
    int Tab[5][4];

    int *P[5];
    int i, j;

    for (i=0; i<5; i++) {
        P[i] = Tab[i];
    }

    for (i = 0; i <5; i++) {
        for (j=0; j<4; j++) {
            *(*(P+i) + j) = 1;
        }
    }

    for (i=0; i<5; i++) {
        print("%P[i] = ", P[i]);
    }
    return 0;
}