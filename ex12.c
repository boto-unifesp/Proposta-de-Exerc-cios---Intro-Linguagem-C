#include <stdio.h>

int main(){
    float salario_atual, reajuste, salario_novo;
    printf("Digite seu salario atual: ");
    scanf("%f", &salario_atual);
    printf("Digite o reajuste em porcentagem: ");
    scanf("%f", &reajuste);
    salario_novo = salario_atual + (salario_atual * reajuste / 100);
    printf("Salário novo: %.2f", salario_novo);

    return 0;
}