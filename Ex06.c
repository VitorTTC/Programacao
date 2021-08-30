#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[])
{
int a,b,c,d,soma;

printf("Digite o Valor 1: ");
scanf("%i", &a);

printf("Digite o Valor 2: ");
scanf("%i", &b);

printf("Digite o Valor 3: ");
scanf("%i", &c);

printf("Digite o Valor 4: ");
scanf("%i", &d);

soma=a+b+c+d;

printf("A soma de %i, %i, %i, %i e igual a %i", a,b,c,d,soma);

return(0);

}