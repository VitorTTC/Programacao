#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
 int base, altura, area;

 printf("Digite o valor da base: ");
 scanf("%i", &base);

 printf("Digite o valor da altura: ");
 scanf("%i", &altura);

 area= base*altura;

 if (area>=100)
 {
    printf("Terreno Grande");
 }
  
 return(0);

}
