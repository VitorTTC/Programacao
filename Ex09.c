#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[])

{
float a,b,c,d,e,valor,troco;

printf("Digite o valor do Produto 01: ");
scanf("%f",&a);

printf("Digite o valor do Produto 02: ");
scanf("%f",&b);

printf("Digite o valor do Produto 03: ");
scanf("%f",&c);

printf("Digite o valor do Produto 04: ");
scanf("%f",&d);

printf("Digite o valor do Produto 05: ");
scanf("%f",&e);

printf("Digite o valor para pagamento: ");
scanf("%f",&valor);

troco=valor-(a+b+c+d+e);

printf("troco do pagamento %.2f",troco);

return(0);


}