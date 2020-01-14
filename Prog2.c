#include <stdio.h>

int main(){

/* Variáveis */

int nmi , nma, nms;

/* Inputs e Outputs */

printf("Introduza um número inteiro: \n");
scanf("%d", &nmi);

/* Calculo */

nma = nmi - 1;
nms = nmi + 1;

/* Resultado */

printf("Número antecessor: %d \n", nma);
printf("Número sucessor: %d \n", nms);
}