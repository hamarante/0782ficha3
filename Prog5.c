#include <stdio.h>

int main(){

/* Variáveis */

int menu;
float multiplicacao, divisao, adicao, subtracao;
float nm1, nm2;

/* Menu */

printf("Qual é a operação que deseja efetuar? \n");
printf("1 - Multiplicação \n");
printf("2 - Divisão \n");
printf("3 - Adição \n");
printf("4 - Subtração \n");
scanf("%d", &menu);
if (menu == 1)
{
    printf("1º Número? \n");
    scanf("%f", &nm1);
    printf("2º Número? \n");
    scanf("%f", &nm2);
    multiplicacao = nm1 * nm2;
    printf("A multiplicação dos dois números dá %0.2f \n", multiplicacao);    
}
if (menu == 2)
{
    printf("1º Número? \n");
    scanf("%f", &nm1);
    printf("2º Número? \n");
    scanf("%f", &nm2);
    divisao = nm1 / nm2;
    printf("A divisão dos dois números dá %0.2f \n", divisao);
}
if (menu == 3)
{
    printf("1º Número? \n");
    scanf("%f", &nm1);
    printf("2º Número? \n");
    scanf("%f", &nm2);
    adicao = nm1 + nm2;
    printf("A adição dos dois números dá %0.2f \n", adicao);
}
if (menu == 4)
{
    printf("1º Número? \n");
    scanf("%f", &nm1);
    printf("2º Número? \n");
    scanf("%f", &nm2);
    subtracao = nm1 - nm2;
    printf("A subtração dos dois números dá %0.2f \n", subtracao);
} 









}