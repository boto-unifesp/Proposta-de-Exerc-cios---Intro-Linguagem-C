#include <stdio.h>
#include <math.h>

int main(){
    float comprimento, largura, altura, caixas;
    printf("Digite o comprimento: ");
    scanf("%f", &comprimento);
    printf("Digite a largura: ");
    scanf("%f", &largura);
    printf("Digite a altura: ");
    scanf("%f", &altura);
    caixas = ((2*comprimento*altura) + (2*largura*altura))/1.5;
    printf("O número de caixas necessárias é: %.0f", ceil (caixas));

    return 0;
}