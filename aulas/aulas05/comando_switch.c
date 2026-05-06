#include <stdio.h>
int main (){
 int nota = 0;

 printf("Entre com uma nota de 1 a 5:");
 scanf("%i", &nota);

//  if (nota == 1){
//     printf("Ganhou uma estrela *\n");
//  } else if (nota == 2){
//     printf("Ganhou duas estrelas *\n");
//  } else if (nota == 3){
//     printf("Ganhou duas estrelas *\n");
//  } else if ( nota == 4){
//      printf("Ganhou duas estrelas *\n");
//  } else if (nota == 5){
//     printf("Ganhou duas estrelas *\n");
//  }
 
      
 switch(nota) {
    case 1: printf("Ganhou uma estrela *\n"); break;
    case 2: printf("Ganhou duas estrela **\n"); break;
    case 3: printf("Ganhou tres estrela ***\n"); break;
    case 4: printf("Ganhou quatro estrela ****\n"); break;
    case 5: printf("Ganhou cinco estrela *****\n"); break;
    default: printf("Nota invalida! Tente de novo.\n");
 }


return 0;

}