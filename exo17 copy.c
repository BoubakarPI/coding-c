#include <stdio.h>

void insert(int t[], int n, float x) {
    int i = 0;

    while (x < t[n-1+i]) {
        t[n-i+2] = t[n-i+1];
        i++;
    }
    t[n-i+2] = x;
}
int main() {
    int t[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    insert(t, 10, 11);
    for (int i = 0; i < 11; i++) {
        printf("%d ", t[i]);
    }
}
