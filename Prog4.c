#include <stdio.h>

int main(){

/* Variáveis */

int nmr;

/* Inputs e Outputs */

printf("Introduza um numero inteiro entre 1 a 7: \n");
scanf("%d", &nmr);

/* Condição */

switch (nmr)
{
case 1:
    printf("Domingo \n");
    break;
case 2:
    printf("Segunda \n");
    break;    
case 3:
    printf("Terça \n");
    break;
case 4:
    printf("Quarta \n");
    break;
case 5:
    printf("Quinta \n");
    break;
case 6:
    printf("Sexta \n");
    break;
case 7:
    printf("Sábado \n");
    break;               
default:
    printf("Número Inválido \n");
    break;
}

}