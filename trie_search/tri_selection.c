#include <stdio.h>
void tri_selection(int tab[], int n) {
    int i, j, tmp;

    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            if(tab[i] > tab[j]) {
                tmp = tab[i];
                tab[i] = tab[j];
                tab[j] = tmp;
            }
        }
    }

    for (int k = 0; k < n; k++) {
        printf("L'élément d'indice %d est : %d\n", k, tab[k]);
    }
}

int main() {
    int arr[] = {4, 2, 0, 5, 3};
    tri_selection(arr, 5);
}
