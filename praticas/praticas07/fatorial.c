#include <stdio.h>

int main() {
    int n, i;
    long long fatorial = 1;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Numero invalido.\n");
    } else {
        for(i = 1; i <= n; i++) {
            fatorial *= i;
        }

        printf("Fatorial de %d = %lld\n", n, fatorial);
    }

    return 0;
}