#include <stdio.h>

void suite(int n) {
    int tab[n];
    tab[0] = 2;
    printf("L'élément d'indice %d est : %d\n", 0, tab[0]);
    tab[1] = 3;
    printf("L'élément d'indice %d est : %d\n", 1, tab[1]);

    for (int i = 2; i <= n; i++) {
        tab[i] = tab[i - 1] + 2* tab[i-2];
        printf("L'élément d'indice %d est : %d\n", i, tab[i]);
    }
}

int main()
{
    int n = 0;
    while (n <= 0)
    {
        printf("Veuillez entrer l'indice du terme (indice > 0) : ");
        scanf("%d", &n);
    }


    suite(n);

}
