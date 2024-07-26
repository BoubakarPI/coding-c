#include <stdio.h>
struct complex
{
    float R; // partie réelle
    float I; // Partie Imaginaire
};
void Ajouter(struct complex c1, struct complex c2, struct complex *res)
{
    res->R = (c1.R + c2.R);
    res->I = (c1.I + c2.I);
}
int main(void)
{
    struct complex c1 = {2.5, 3}, c2 = {1.24, 4}, somme;
    Ajouter(c1, c2, &somme);
printf("res.R = %f et res.I = %f", somme.R,somme.I);
}