#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {

char nome[300];
int idade;
float nota1, nota2, nota3, somanotas, media;

printf("me informe seu nome \n");
gets(nome);

printf("infomre sua idade \n");
scanf("%d",&idade);

printf("diga a primeira nota \n");
scanf("%f",&nota1);

printf("diga a segunda nota \n");
scanf("%f",&nota2);

printf("diga a terceira nota \n");
scanf("%f",&nota3);


if (media >= 7) {

printf("aprovado \n"); 

} else if (media <= 5) {

printf("recuperacao \n");

} else {

printf("reprovado \n");

}

media = nota1, nota2, nota3 / 3;


printf("nome do aluno %s \n",nome);
printf("idade do aluno %d \n",idade);
printf("media final do aluno %.1f \n",media);



return 0;

}

