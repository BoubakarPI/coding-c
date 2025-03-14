#include <stdio.h>

float suite(int n)
{
    if (n == 0)
    {
        return 2;
    }
    else if (n == 1)
    {
        return 3;
    }
    else
    {
        return suite(n - 1) + 2 * suite(n - 2);
    }
}

int main()
{
    int n = 0;
    while (n <= 0)
    {
        printf("Veuillez entrer l'indice du terme (indice > 0) : ");
        scanf("%d", &n);
    }
    for (int i = 0; i <= n; i++)
    {
        printf("L'élément d'indice %d est : %f\n", i, suite(i));
    }
}
