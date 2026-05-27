#include <stdio.h>
#include <string.h>

int main() {
    char primeiroNome[50];
    char ultimoNome[50];
    char nomeCompleto[100];

    printf("Digite o primeiro nome: ");
    scanf("%s", primeiroNome);

    printf("Digite o ultimo nome: ");
    scanf("%s", ultimoNome);

    strcpy(nomeCompleto, primeiroNome);
    strcat(nomeCompleto, " ");
    strcat(nomeCompleto, ultimoNome);

    printf("Nome completo: %s\n", nomeCompleto);

    return 0;
}