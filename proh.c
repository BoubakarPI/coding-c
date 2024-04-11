#include <stdio.h>
main()
{
int i, k, t, Position1 = 50, Position2 = 100, Position3 = 7;
i = -10;
t = Position1 * Position2; /* t = 5000*/
k = t * Position3; /* k = -30536 au lieu de 35000*/
printf("%d\n", k);
}