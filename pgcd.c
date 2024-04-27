#include <stdio.h>


int main() {
    unsigned int a, b, m, n;


    printf("Entrer le 1er élément : ");
    scanf("%u", &a);

    printf("Entrer le 2e élément : ");
    scanf("%u", &b);
    m = a;
    n = b;

    while (m != n) {
        if (m>n) {m = m - n;}
        else if (m = n) {m = n;}
        
        else {n = n - m;}
    }

    printf("Le pgcd de %u et %u est %u", a, b, m);
}
