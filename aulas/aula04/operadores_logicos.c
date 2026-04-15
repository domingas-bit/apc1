#include <stdio.h>
int main() {
   int idade;
  
   printf("Entre com a sua idade: ");
   scanf("%i", &idade);
   while(getchar() != '\n');
   
   printf("Voce eh uma crianca? %i\n", idade >= 0 && idade <= 12 );   
   printf("Voce eh um adolescente? %i\n", idade >  12 && idade < 16 );
   printf("Voce eh jovem? %i\n", idade >= 16 && idade <= 20 );
    

      printf("Voce tem prioridade para vacinar? %i\n", idade <= 6 || idade >= 60);

      printf(" Voce naum pode votar? %i\n", !(idade >=16));
  
    return 0;
}