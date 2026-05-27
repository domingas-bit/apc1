#include <stdio.h>
int main(){

int opcao;

do{
printf("\n====Menu====\n");
printf("1-Novo jogo\n");
printf("2-continuar o jogo\n");
printf("3-Ver pontuacao\n");
printf("4-Sair\n");
printf("Escolha uma opcao:");
scanf("%d", &topcao);

switch(opcao){

case 1:
printf("Novo jogo iniciado!\n");
break;

case 2: 
printf("Continuando o jogo...\n");
break;

case 3: 
printf("pontuacao do jogador.\n");
break;

case 4: 
printf("Saindo...\n");
break;

default
printf("opcao invalida!\n");
}


} While(opcao != 4);

   return 0;
}