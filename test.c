#include <stdio.h>

int main() {
    int i, z, x, y;
    x = 2; 
    y = 10;
    z = 1;
    i = 1;
    
    while (i <= y) {
        z = z * x;
        i++;
    }
    
    printf("\nDeux à la puissance dix font %d\n", z);
    printf("Bonjour les\n");
    
    return 0;
}
