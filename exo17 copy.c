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
    int n, x, i, t[12];
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Entrer les elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d\t", &t[i]);
    }
    printf("Entrer l'élement à inserer: ");
    scanf("%d", &x);
    insert(t, n, x);

    for(int i = 0; i < n; i++) {
        printf("%d\t", t[i]);
    }
}

