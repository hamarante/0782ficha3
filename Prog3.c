#include <stdio.h>

int main(){

/* Variáveis */

float premio = 500000.00;
float v1, v2, v3; 

/* Cálculo */

v1 = premio * 0.46;
v2 = premio * 0.32;
v3 = premio * 0.22;

/* Resultado */

printf("O primeiro vencedor receberá %0.2f € \n", v1);
printf("O segundo vencedor receberá %0.2f € \n", v2);
printf("O terceiro vencedor receberá %0.2f € \n", v3);
}