#include <stdio.h>

float terme(int n) {

    if (n==0)
        return 2;
    if (n==1)
        return 3;
    else
        return (2/3)*terme(n-1)-(1/4)*terme(n);
}

int main() {
int n;
float s;

printf("Entrez n");
scanf("%d", &n); 

s = terme(n);
printf("%f", s);

}