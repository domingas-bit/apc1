#include <stdio.h>

struct Aluno {
    char nome[50];
    int matricula;
};

int main() {
    struct Aluno alunos[5];
    int i;

    for(i = 0; i < 5; i++) {
        printf("\nAluno %d\n", i + 1);

        printf("Digite o nome: ");
        scanf("%s", alunos[i].nome);

        printf("Digite a matricula: ");
        scanf("%d", &alunos[i].matricula);
    }

    printf("\n--- LISTA DE ALUNOS ---\n");

    for(i = 0; i < 5; i++) {
        printf("Aluno %d\n", i + 1);
        printf("Nome: %s\n", alunos[i].nome);
        printf("Matricula: %d\n\n", alunos[i].matricula);
    }

    return 0;
}