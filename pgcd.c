#include <stdio.h>


int pgcd (int a, int b) {
    if (a == b) {
        return a;
    } else if (a > b) {
        return pgcd(a-b, b);
    }
    else {
        return pgcd(a, b-a);
    }
}
int main() {
    int a, b;
    float s;
    printf("Entrer le 1er élément : ");
    scanf("%d", &a);

    printf("Entrer le 2e élément : ");
    scanf("%d", &b);

    s = pgcd(a, b);

    printf("Le pgcd de %d et %d est %d", a, b, s);
}
