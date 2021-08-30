// Declaração das bibliotecas utilizadas no programa
#include <stdio.h>
#include <stdlib.h>
 
// Função principal do programa
int main(int argc, char *argv[])

{
 int lado, area;

 printf("Digite o lado: ");
  scanf("%i", &lado);


  area = lado*lado;

printf("Area do quadrado %i lado, calculo da area %i", lado, area);

return (0);

}