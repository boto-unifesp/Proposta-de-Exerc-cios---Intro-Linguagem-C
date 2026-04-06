#include <stdio.h>

int main(){
    float salario_hora, hora_mes;
    printf("Digite seu salário por hora: ");
    scanf ("%f", &salario_hora);
    printf("Digite a quantidade de horas trabalhadas no mês: ");
    scanf ("%f", &hora_mes);
    printf("Seu salário neste mês será: %.2f", salario_hora*hora_mes);

    return 0;
}