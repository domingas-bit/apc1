#include <stdio.h>

struct Pessoa {
    char nome[50];
    int idade;
    float altura;
    char sexo;
};

int main() {
    struct Pessoa p;

    printf("Digite o nome: ");
    scanf("%s", p.nome);

    printf("Digite a idade: ");
    scanf("%d", &p.idade);

    printf("Digite a altura: ");
    scanf("%f", &p.altura);

    printf("Digite o sexo (M/F): ");
    scanf(" %c", &p.sexo);

    printf("\n--- DADOS DA PESSOA ---\n");
    printf("Nome: %s\n", p.nome);
    printf("Idade: %d\n", p.idade);
    printf("Altura: %.2f\n", p.altura);
    printf("Sexo: %c\n", p.sexo);

    return 0;
}