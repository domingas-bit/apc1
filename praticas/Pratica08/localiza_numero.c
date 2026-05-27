#include <stdio.h>

int main() {
    int vetor[10];
    int i, numero, encontrado = 0;

    for(i = 0; i < 10; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("Digite um numero para localizar: ");
    scanf("%d", &numero);

    for(i = 0; i < 10; i++) {
        if(vetor[i] == numero) {
            printf("Numero encontrado na posicao %d\n", i);
            encontrado = 1;
        }
    }

    if(encontrado == 0) {
        printf("O numero nao esta no vetor.\n");
    }

    return 0;
}