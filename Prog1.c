#include <stdio.h>

int main(){

/* Variáveis */
float fahrenheit, celsius;

/* Inputs e Outputs */

printf("Fahrenheit? \n");
scanf("%f", &fahrenheit);

/* Conversão */

celsius = (fahrenheit - 32) * (5.0/9.0);

/* Resultado */

printf("Celsius: %0.2f graus Celsius \n", celsius);

}