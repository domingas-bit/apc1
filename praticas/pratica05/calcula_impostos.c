#include <stdio.h>

#define ICMS 0.17
#define ISS 0.05
#define PIS 0.0165

int main() {
    float valor, valorICMS, valorISS, valorPIS, valorFinal;

    printf("Digite o valor do produto: ");
    scanf("%f", &valor);

    valorICMS = valor * ICMS;
    valorISS = valor * ISS;
    valorPIS = valor * PIS;

    valorFinal = (1 + ICMS + ISS + PIS) * valor;

    printf("\nICMS: R$ %.2f\n", valorICMS);
    printf("ISS: R$ %.2f\n", valorISS);
    printf("PIS: R$ %.2f\n", valorPIS);
    printf("Preco final: R$ %.2f\n", valorFinal);

    return 0;
}
