#include <stdio.h>

int main(){
    float carros, vendas, salario_fixo, valor_carro, salario_final;
    printf("Digite o número de carros vendidos: ");
    scanf("%f", &carros);
    printf("Digite o total das vendas em reais: ");
    scanf("%f", &vendas);
    printf("Digite o salário fixo em reais: ");
    scanf("%f", &salario_fixo);
    printf("Digite o valor da comissão por cada carro vendido em reais: ");
    scanf("%f", &valor_carro);
    salario_final = salario_fixo + (carros*valor_carro) + (vendas*0.05);
    printf("O salário final será: R$ %.2f", salario_final);

    return 0;
}