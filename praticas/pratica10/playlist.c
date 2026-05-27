#include <stdio.h>

enum GeneroMusical {
    POP,
    ROCK,
    MPB
};

struct Musica {
    char titulo[50];
    float duracao;
    enum GeneroMusical genero;
};

int main() {
    struct Musica playlist[5];
    int i, genero;

    for(i = 0; i < 5; i++) {

        printf("\nMusica %d\n", i + 1);

        printf("Digite o titulo: ");
        scanf("%s", playlist[i].titulo);

        printf("Digite a duracao (em minutos): ");
        scanf("%f", &playlist[i].duracao);

        printf("Genero (0-POP, 1-ROCK, 2-MPB): ");
        scanf("%d", &genero);

        playlist[i].genero = genero;
    }

    printf("\n--- PLAYLIST ---\n");

    for(i = 0; i < 5; i++) {

        printf("\nTitulo: %s\n", playlist[i].titulo);
        printf("Duracao: %.2f minutos\n", playlist[i].duracao);

        printf("Genero: ");

        switch(playlist[i].genero) {
            case POP:
                printf("POP\n");
                break;

            case ROCK:
                printf("ROCK\n");
                break;

            case MPB:
                printf("MPB\n");
                break;

            default:
                printf("Desconhecido\n");
        }
    }

    return 0;
}