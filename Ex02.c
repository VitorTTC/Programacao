// Declaração das bibliotecas utilizadas no programa
#include <stdio.h>
#include <stdlib.h>
 
// Função principal do programa
int main(int argc, char *argv[]){
 
  // Declaração de variáveis
  int a, b, soma;
 
  // Solicita entrada de dados para o usuário e grava o valor digitado em uma variável "a"
  printf("Digite o primeiro numero: ");
  scanf("%i", &a);
 
  // Solicita entrada de dados para o usuário e grava o valor digitado em uma variável "b"
  printf("Digite o segundo numero: ");
  scanf("%i", &b);
 
  // Faz a soma dos valores obtidos acima
  soma = a + b;
 
  // Exibe o resultado final
  printf("A soma de %i e %i e igual a %i", a, b, soma);
 
  return 0;
}
