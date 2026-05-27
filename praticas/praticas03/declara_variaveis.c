#include <stdio.h>
int main(){
    char sexo;

    printf("Digite Seu sexo usando 'M' OU 'F':");
    scanf("%c", &sexo);
    While(getchar()!='\n');

    int idade;
    
     printf("Digite sua idade:");
     scanf("%i", &idade);
     while (getchar() !='\n');

     float altura;
     printf("informe a sua altura:");
     scanf("%f", &altura);
     while (getchar() !='\n');

     float peso;
     printf("informe o seu peso:");
     scanf("%f", &peso);
     while (getchar() !='\n');

     printf("seu peso eh: %c\n", sexo);
     printf("sua idade eh: %c\n", idade);
     printf("sua altura eh: %c\n", altura);
     printf("seu peso eh: %c\n", peso);

    return 0;
}