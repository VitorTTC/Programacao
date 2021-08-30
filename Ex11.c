#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[])
{

    int valor1, valor2;

    printf("Digite Valor1: ");
    scanf("%i",&valor1);

    printf("Digite Valor2: ");
    scanf("%i",&valor2);

    if(valor1>valor2)
    {
     printf("O maior valor e o Valor1: %i", valor1);
    }

    else
    {
     printf("O maior valor e o Valor2: %i", valor2);
    }

    return(0);

}
