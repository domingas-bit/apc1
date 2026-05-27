#include <stdio.h>

int main() {
    int numero, copia;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    copia = numero;

    printf("\nPre-incremento: %d\n", ++numero);
    numero = copia;

    printf("Pos-incremento: %d\n", numero++);
    printf("Valor apos pos-incremento: %d\n", numero);

    numero = copia;

    printf("\nPre-decremento: %d\n", --numero);
    numero = copia;

    printf("Pos-decremento: %d\n", numero--);
    printf("Valor apos pos-decremento: %d\n", numero);

    return 0;
}
