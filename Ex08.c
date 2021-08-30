#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[])

{

float dolar, valor, x;

printf("Digite a cotacao do dolar: ");
scanf("%f",&dolar);

printf("Digite a quantidade para conversao: ");
scanf("%f",&valor);

x=dolar*valor;

printf("O valor da conversao para reais e %.2f",x);

return(0);


}