#include <stdio.h>

int n;
int s = 0;
int main () {


    printf("Veuillez entrer votre sexe svp : ");
    scanf("%d", &n);

    while (n!=0)
    {
        s = s +n%10;
        n /= 10;
    }

    printf("La somme est %d est ; ", s);
    
}