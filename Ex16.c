#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[])
{
  int valor1,valor2,valor3;

  printf("Digite o Valor1: ");
  scanf("%i", &valor1);

  printf("Digite o valor2: ");
  scanf("%i", &valor2);

  printf("Digite o valor3: ");
  scanf("%i", &valor3);

  if (valor1>valor2)
   {
        if (valor1>valor3)
        {
         printf("O valor1 e o maior");
        }
       
    
        else
        {
           printf("O valor3 e o maior");
        }
    }
    
  
  else
   { 
        if (valor2>valor3)
        {
          printf("O valor2 e o maior");
        }
    
        else
        {
          printf("O valor3 e o maior");
        }
    }
    

return(0);
}
