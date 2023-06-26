#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {

char nome[300];
char email[300];
int idade;
int telefone;
int opcao;

printf("informe seu nome \n");
gets(nome);

printf("informe seu email \n");
gets(email);


printf("informe sua idade \n");
scanf("%d",&idade);


printf("informe seu telefone \n");
scanf("%d",&telefone);


printf("[1] nome e idade \n");
printf("[2] nome e email \n");
printf("[3] nome e telefone \n");
printf("[4] mostrar todas informacoes \n");    
scanf("%d",&opcao);


switch (opcao) {

case 1:
printf(" nome %s \n",nome); 
printf("idade %d \n",idade);   
break;

case 2:
printf("nome %s \n",nome);
printf("email %s \n",email);
break;

case 3:
printf("nome %s \n",nome);
printf("telefone %d \n",telefone);
break;

case 4:
printf("nome %s \n",nome);
printf("idade %d \n",idade);
printf("nome %s \n",nome);
printf("email %s \n",email);
printf("nome %s \n",nome);
printf("telefone %d \n",telefone);
break;


default:
printf("opcao incorreta, tente novamente \n");
break;

}


return 0;

}
