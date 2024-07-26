#include <stdio.h>

/* int calcule(int *x, int *y)
{
    return *x + *y;
}
int main(void)
{
    int a, b, resultat;

    a = 10;
    b = 12;

    // printf("Entrer a et b : \n");
    // scanf("%d %d", a, b);

    resultat = calcule(&a, &b);

    printf("La somme est %d\n", resultat);
} */
int calculate(int a, int b)
{
    return a + b;
}
int main()
{
    int a, b, c;
    int *result;

    printf("Entrer a et b : \n");
    scanf("%d %d", &a, &b);

    c = a + b;
    result = &c;

    printf("La somme de a : %d et b = %d\n donne result = %d", a, b, *result);

    return 0;
}