// Declaração das bibliotecas utilizadas no programa
#include <stdio.h>
#include <stdlib.h>
 
// Função principal do programa
int main(int argc, char *argv[])

{
 int base, altura, area;

 printf("Digite a base: ");
  scanf("%i", &base);

printf("Digite a altura: ");
  scanf("%i", &altura);


  area = (base * altura)/2;

printf("Area do triangulo %i base,  %i altura, calculo da area %i", base, altura, area);

return(0);
}