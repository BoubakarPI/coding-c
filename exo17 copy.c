#include <stdio.h>

void insert(int t[], int n, int x) {
    int i, pos;

    i = n-1;
    n = n+1;

    while (t[i] > x) {
        t[i+1] = t[i];
        i--;
    }
    pos = i +1;
    t[pos] = x;
}
int main() {
    int t[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    insert(t, 10, 11);
    for (int i = 0; i < 11; i++) {
        printf("%d\t", t[i]);
    }
}
