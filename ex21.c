#include <stdio.h>

int main(){
    float comprimento_pista, total_voltas, reabastecimentos, consumo, minimo_litros, total_litros, km_total;
    printf("Digite o comprimento da pista, em metros: ");
    scanf ("%f", &comprimento_pista);
    printf("Digite o total de voltas: ");
    scanf ("%f", &total_voltas);
    printf("Digite o total de reabastecimentos: ");
    scanf ("%f", &reabastecimentos);
    printf("Digite o consumo de combustível, em Km/L: ");
    scanf ("%f", &consumo);
    km_total = comprimento_pista*total_voltas/1000;
    total_litros = km_total/consumo;
    minimo_litros = total_litros/(reabastecimentos + 1);
    printf("\nA quantidade mínima de litros até o primeiro reabastecimento deve ser de %.1f", minimo_litros);

    return 0;
}