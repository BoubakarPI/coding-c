#include <stdio.h>
#include <math.h>


int main() {
    float a, b, c, d, x1, x2;

    printf("Entrez a : ");
    scanf("%f", &a);
    printf("Entrez b : ");
    scanf("%f", &b);
    printf("Entrez c : ");
    scanf("%f", &c);

    d = (b*b) - (4*a*c);
    if(d>0)
        x1 = -b-sqrt(d);


}