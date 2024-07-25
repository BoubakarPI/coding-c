#include <stdio.h>
struct point
{
 /* déclaration de la structure */
float x,y,z;
};
 /* ne pas oublier le point-virgule  */
int main(void)
{
struct point P;
puts("Veuillez entrer les coordonnées d’un point 3D :");
scanf("%f %f %f", &P.x, &P.y, &P.z);

puts("L’homothétie de centre O et de rapport 3");
printf("appliquée à ce point donne :’’");
printf("(%.2f, %.2f, %.2f)\n", 3*P.x, 3*P.y, 3*P.z);
return 0;
}