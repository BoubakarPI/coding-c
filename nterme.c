#include <stdio.h>

float terme(int n) {

    if (n==0)
        return 2;
    if (n==1)
        return 3;
    else
        return (2.0/3)*terme(n-1)-(1.0/4)*terme(n-2);
}

int main() {
int n;
float s;

printf("Entrez n: ");
scanf("%d", &n); 

s = terme(n);
printf("%f", s);

}