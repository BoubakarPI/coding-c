#include <stdio.h>

float calcule(int *x, int *y) {
    float moyen;
    int somme;

    return somme = *x + *y, moyen = (*x + *y) / 2;
}
int main(void) {
    int a, b, resultat;

    a = 10;
    b = 12;

    // printf("Entrer a et b : \n");
    // scanf("%d %d", a, b);

    resultat = calcule(&a, &b);

    printf("La somme est %d et la moyenne est %d\n", resultat, resultat);



} 