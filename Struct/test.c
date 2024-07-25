#include <stdio.h>
#include <string.h>

struct Livre
{
    char titre[100];
    char auteur[100];
    int annee;
};

struct Book
{
    char titre[100];
    char auteur[100];
    int annee;
};

void afficherLivre(struct Livre livre)
{
    printf("\n================================\n");
    printf("Titre du livre 1: %s\n", livre.titre);
    printf("Auteur du lvre 1 : %s\n", livre.auteur);
    printf("L'année de pub : %d\n", livre.annee);
}

void readBook(struct Book book)
{
    printf("\n================================\n");
    printf("Titre du livre 1: %s\n", book.titre);
    printf("Auteur du lvre 1 : %s\n", book.auteur);
    printf("L'année de pub : %d\n", book.annee);
}

typedef struct Livre Livre;

int main()
{
    struct Livre livre1;
    struct Livre livre2;
    struct Book book;

    printf("Entrez les informations du premier livre:\n");

    livre1.annee = 2000;
    strcpy(livre1.titre, "Les enfants du peuple");
    strcpy(livre1.auteur, "Jules Verne");

    livre2.annee = 2000;
    strcpy(livre2.titre, "Les enfants du peuple");
    strcpy(livre2.auteur, "Jules Verne");

    book.annee = 2000;
    strcpy(book.titre, "La fille de Moussa");
    strcpy(book.auteur, "Moussa Saadi");

    afficherLivre(livre1);

    readBook(book);
}
