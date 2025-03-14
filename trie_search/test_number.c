#include <stdio.h>

void suite(int x)
{
    int tab[100];
    tab[0] = 2;
    tab[1] = 3;
    tab[2] = tab[1] + 2*tab[0];

    // Remplissons d'abord le tableau des termes de la suite jusqu'à obtenir le dernier indice >= x
    for (int i = 2; tab[i] < x; i++)
    {
        tab[i] = tab[i - 1] + 2 * tab[i - 2];
    }

    // Verifions maintenant si x est un élément du tableau en ne parcourant toujours que les élémnts du tableau <= x
    for (int i = 0; tab[i] <= x; i++ ) {
        if(tab[i] == x) {
                printf("L'élément %d est un terme de la suite, de rang %d \n", x, i);
        }
    }
}

int main()
{
    /*
    Quelques termes pour tester
    Veuillez entrer l'indice du terme (indice > 0) : 10
L'élément d'indice 0 est : 2
L'élément d'indice 1 est : 3
L'élément d'indice 2 est : 7
L'élément d'indice 3 est : 13
L'élément d'indice 4 est : 27
L'élément d'indice 5 est : 53
L'élément d'indice 6 est : 107
L'élément d'indice 7 est : 213
L'élément d'indice 8 est : 427
L'élément d'indice 9 est : 853
L'élément d'indice 10 est : 1707
    */
    int n = 0;
    while (n < 3)
    {
        printf("Veuillez entrer l'élément x (x > 2) : ");
        scanf("%d", &n);
    }

    suite(n);
}
