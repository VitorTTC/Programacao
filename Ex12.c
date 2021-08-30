#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int valor1, valor2;

  printf("Digite o Valor1: ");
  scanf("%i", &valor1);

  printf("Digite o Valor2: ");
  scanf("%i", &valor2);

  if(valor1>valor2)
  {
    printf("O menor valor e o Valor2: %i", valor2);
  }

  else
  {
    printf("O menor valor e o Valor1: %i", valor1);
  } 

 return(0);

}

