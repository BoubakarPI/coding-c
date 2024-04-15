#include <stdio.h>

int main() {
    int i = 0;
    char count = 'a';
    printf("Entrez un nombre que vous voulez");

    while(count != 0) {
        printf("Vous êtes au %d essai", i);
        scanf("%d", &count);
        i++;
    }
}

