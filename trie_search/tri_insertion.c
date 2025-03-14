#include <stdio.h>

void tri_insertion(int tab[], int n) {
    int i, j, tmp;

    for(i = 1; i < n; i++) {
        tmp = tab[i];
        j = i -1;

        for (j = i - 1; j >= 0; j--)
        {
            if (tab[j] > tab[j+1]) {
                tab[j+1] = tab[j];
                tab[j] = tmp;
            }
        }
    }

    for (int k = 0; k<n; k++) {
        printf("L'élément d'indice %d est : %d\n", k, tab[k]);
    }
}

int main() {
    int tab[20];
    int n = 0;

    printf("Entrez la taille du tableau : ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Entrez l'élément : \n");
        scanf("%d", &tab[i]);
    }

    tri_insertion(tab, n);


}
