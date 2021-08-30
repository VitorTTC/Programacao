#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[])
{
  int valor1, valor2;

  printf("Digire o Valor1: ");
  scanf("%i", &valor1);

  printf("Digite o Valor2: ");
  scanf("%i", &valor2);

  if (valor1==valor2)
  {
    printf("Valores iguais");
  }
  
  else
  
    if (valor1>valor2)
    {
      printf("O valor1 e o maior: %i",valor1);
    }
    
    else
    {
        printf("O valor2 e o mairo valor: %i",valor2);
    }
   
  return(0); 

  






}