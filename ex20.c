#include <stdio.h>

int main(){
    float odometro_manha, odometro_noite, litros, total_passageiros, media_consumo, lucro;
    printf("Digite a leitura do odômetro pela manhã: ");
    scanf("%f", &odometro_manha);
    printf("Digite a leitura do odômetro pela noite: ");
    scanf("%f", &odometro_noite);
    printf("Digite o número de litros de combustível gastos: ");
    scanf("%f", &litros);
    printf("Digite o total recebido dos passageiros: ");
    scanf("%f", &total_passageiros);
    media_consumo = (odometro_noite - odometro_manha)/litros;
    lucro = total_passageiros - (litros*2.90);
    printf("\nA média de consumo do veículo é: %.2f km/l", media_consumo);
    printf("\nO lucro obtido é: R$ %.2f", lucro);

    return 0;
}