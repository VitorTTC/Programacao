#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])

{
int c;
float f,s,v;
s=1.8;
v=32;

printf("Digite a Temperatura em C: ");
scanf("%i", &c);

f=(c*s)+v;

printf("A conversao de %i graus celsius e igual a %.2f graus fahrenheit",c,f);

return(0);

}