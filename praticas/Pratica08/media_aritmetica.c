#include <stdio.h>

int main() {
    int n, i;
    int vetor[100];
    float soma = 0, media;

    printf("Quantos numeros deseja inserir? ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &vetor[i]);

        soma += vetor[i];
    }

    media = soma / n;

    printf("A media aritmetica eh: %.2f\n", media);

    return 0;
}