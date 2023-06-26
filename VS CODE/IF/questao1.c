#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {

float numero;

printf("digite um numero \n");
scanf("%f",&numero);

if (numero > 10)
{
    printf("maior que 10");

} else if (numero >= 10) {

    printf("igual a 10");

} else {

printf("menor que 10");

}

return 0;

}
