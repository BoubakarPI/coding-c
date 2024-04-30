#include <stdio.h>

int main() {
    int i;
    int n;
    int t1[n];

    printf("Entrer la taille de tableau 1");
    scanf("%d", &n);
    
    for (i =0; i< n; i++) {
        printf("Entrer un élément du tableau 1");
        scanf("%d", &t1[i]);
    }
    
}
