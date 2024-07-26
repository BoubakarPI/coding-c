#include <stdlib.h>
#include <stdio.h>


struct etudiant
{
    /* data */
    char nom[20];
    int age;
};

int main()
{
    struct etudiant *et1;

    et1 = malloc(sizeof(struct etudiant));

    printf("Veuillez saisir le nom de l'etudiant : \n");
    scanf("%s", &et1->nom);

    printf("Veuillez saisir l'age de l'etudiant : \n");
    scanf("%d", &et1->age);

    printf("Les informations sont : \n nom = %s \n age = %d", et1->nom, et1->age);

    free(et1);

}