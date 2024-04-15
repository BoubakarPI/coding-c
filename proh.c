#include <stdio.h>

int main() {
    int i;
    char count = 'a';

    while(count != 0) {
        printf("Entrez un nombre que vous voulez");
        scanf("%d", &count);
        i++;
    }
}

