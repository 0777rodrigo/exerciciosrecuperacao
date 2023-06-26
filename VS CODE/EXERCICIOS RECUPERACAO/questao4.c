#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {

int numero[6], par = 0, impar = 0;
int i;

for (i = 0; i < 6; i++) {
    
printf("digite o %d numero \n",i + 1);
scanf("%d",&numero[i]);

if (numero[i] % 2 == 0) {
    
par++;

} else {

impar++;
}

}

printf("total de numeros pares %d \n",par);
printf("total de numeros impares %d \n",impar);

return 0;

}
