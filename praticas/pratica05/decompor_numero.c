#include <stdio.h>

int main() {
    int numero;
    int milhares, centenas, dezenas, unidades;

    printf("Digite um numero de quatro digitos: ");
    scanf("%d", &numero);

    milhares = numero / 1000;
    centenas = (numero % 1000) / 100;
    dezenas = (numero % 100) / 10;
    unidades = numero % 10;

    printf("\nMilhares: %d\n", milhares);
    printf("Centenas: %d\n", centenas);
    printf("Dezenas: %d\n", dezenas);
    printf("Unidades: %d\n", unidades);

    return 0;
}
