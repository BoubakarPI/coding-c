#include <stdio.h>

int main() {
    int i = 0;
    char count = 'a';
    printf("Entrez un lapous vo,,ulez");

    while(count != 0) {
        printf("Vous au n ième essai", i);
        scanf("%d", &count);
        i++;
    }
}

