#include <stdio.h>

int calcule(int *x, int *y) {
    

    return *x + *y;
}
int main(void) {
    int a, b, resultat;

    a = 10;
    b = 12;

    // printf("Entrer a et b : \n");
    // scanf("%d %d", a, b);

    resultat = calcule(&a, &b);

    printf("La somme est %d\n", resultat);



} 