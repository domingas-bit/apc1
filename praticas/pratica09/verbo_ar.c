#include <stdio.h>
#include <string.h>

int main() {
    char verbo[50];
    int tamanho;

    printf("Digite um verbo: ");
    scanf("%s", verbo);

    tamanho = strlen(verbo);

    if(tamanho >= 2 &&
       verbo[tamanho - 2] == 'a' &&
       verbo[tamanho - 1] == 'r') {

        printf("O verbo termina com 'ar'.\n");

    } else {

        printf("O verbo nao termina com 'ar'.\n");
    }

    return 0;
}