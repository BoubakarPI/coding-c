#include <stdio.h>

int main() {
    int age = 2;
    int *sexe;

    sexe = &age;

    printf("La valeur est %d et le pointeur point vers %p\n", age, *sexe);
    return 0;

}