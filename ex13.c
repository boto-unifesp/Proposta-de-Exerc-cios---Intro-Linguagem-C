#include <stdio.h>

int main(){
    float custo_fabrica, custo_consumidor, porcentagem_distribuidor, impostos;
    printf("Digite o custo de fábrica do carro em reais: ");
    scanf("%f", &custo_fabrica);
    porcentagem_distribuidor = custo_fabrica * 0.28;
    impostos = custo_fabrica * 0.45;
    custo_consumidor = custo_fabrica + porcentagem_distribuidor + impostos;
    printf("O custo ao consumidor é: R$ %.2f", custo_consumidor);

    return 0;
}