#include <stdio.h>

int main() {
    char caractere;

    printf("Digite um caractere: ");
    scanf("%c", &caractere);

    printf("Caractere informado: %c\n", caractere);
    printf("Codigo ASCII: %d\n", caractere);

    return 0;
}
