#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {

float produto, numero1, numero2, media, soma, maior, menor;


printf("escreva o primeiro numero \n");
scanf("%f",&numero1);

printf("escreva o segundo numero \n");
scanf("%f",&numero2);

if (numero1 > numero2) {

maior= numero1;
menor= numero2;

} else {

maior= numero2;
menor= numero1;

}

soma= numero1 + numero2;
produto= numero1 * numero2;
media= numero1,numero2 / 2;



printf("soma dos numeros %.0f \n",soma);
printf("produto dos numeros %.0f \n",produto);
printf("media dos numeros %.0f \n",media);
printf("maior numero %0.f \n",maior);
printf("menor numero %0.f \n",menor);


return 0;

}