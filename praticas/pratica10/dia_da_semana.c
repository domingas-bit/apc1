#include <stdio.h>

enum DiaSemana {
    DOMINGO = 1,
    SEGUNDA,
    TERCA,
    QUARTA,
    QUINTA,
    SEXTA,
    SABADO
};

int main() {
    int numero;

    printf("Digite um numero de 1 a 7: ");
    scanf("%d", &numero);

    switch(numero) {
        case DOMINGO:
            printf("Domingo\n");
            break;

        case SEGUNDA:
            printf("Segunda-feira\n");
            break;

        case TERCA:
            printf("Terca-feira\n");
            break;

        case QUARTA:
            printf("Quarta-feira\n");
            break;

        case QUINTA:
            printf("Quinta-feira\n");
            break;

        case SEXTA:
            printf("Sexta-feira\n");
            break;

        case SABADO:
            printf("Sabado\n");
            break;

        default:
            printf("Numero invalido.\n");
    }

    return 0;
}