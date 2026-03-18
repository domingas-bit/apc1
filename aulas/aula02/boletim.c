#include <stdio.h>

int main() {
/*
 =======================
    Boletim de Notas
================== 
 Disciplina    A1 A2 A3 MF
  APC1       5.2 2.2 6.0 5.5 
 Matematica Discre 6.0 5.0 - 5.6
Calculo    4.0  4.0 4.0 4.00
*/
   printf("=================\n");
   printf("  Boletim de Notas \n");
   printf("================== \n");
   printf("Disciplina  A1 A2 A3 MF\n");

int codigo_disciplina;
 float nota_a1;
 float nota_a2;
 float nota_a3;
 float media_final;
 
 codigo_disciplina = 118;
 nota_a1 = 5.2f;
 nota_a2 = 2.3f;
 nota_a3 = 6.0f; 
 media_final = 5.6f;

   printf(" %05i %5.1f %5.1f %5.1f %5.1f\n", codigo_disciplina,
    nota_a1,nota_a2,nota_a3,media_final); 
   
   codigo_disciplina = 257;
   nota_a1 = 10.0f;
   nota_a2 = 5.0f;
   nota_a1 = 0.0f;
   media_final = 5.5f;
   
   printf("%05i  %5.1f %5.1f %5.1f %5.1f\n", codigo_disciplina,
     nota_a1,nota_a2,nota_a3,media_final);

    codigo_disciplina = 91;
    nota_a1 = 4.0f;
    nota_a2 = 4.0f;
    nota_a1 = 4.0f;
    media_final = 0.0f;

   printf("%05i %5.1f %5.1f %5.1f %5.1f\n", codigo_disciplina,
     nota_a1,nota_a2,nota_a3,media_final);
    return 0;
}