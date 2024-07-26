#include <stdio.h>

int main(void)
{
    int x, y, s;
    int *p;

    printf("Entrez le premier nbre 1 et le nbre 2 : ");
    scanf("%d %d", &x, &y);

    s = x + y;

    p = &s;

    printf("La somme de %d et %d  donne : %d", x, y, *p);
}