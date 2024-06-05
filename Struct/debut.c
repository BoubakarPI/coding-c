#include <stdio.h>

struct point
{
    int x,y;
};




struct Point {
    int x, y;
};

struct etudiant 
{
    char prenom[20];
    int age;
};

int main(void) {


/*struct Point tab[10];

tab[0].x = 2;
tab[0].y = 3;

printf("Les coordonnées sont x = %d, y = %d \n", tab[0].x, tab[0].y);*/

struct etudiant *et1;

et1 = (struct etudiant*)malloc(sizeof(struct etudiant));

}