#include <stdio.h>

int main() {
    int n, i;
    char palavras[100][50];

    printf("Quantas palavras deseja inserir? ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("Digite a palavra %d: ", i + 1);
        scanf("%s", palavras[i]);
    }

    printf("\nPalavras digitadas:\n");

    for(i = 0; i < n; i++) {
        printf("%s\n", palavras[i]);
    }

    return 0;
}