#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[])

{

float imc,peso,altura;

printf("Digite o Peso: ");
scanf("%f",&peso);

printf("Digite a altura: ");
scanf("%f",&altura);

imc=peso/(altura*altura);

printf("O imc calculado e %.2f",imc);

return(0);


}