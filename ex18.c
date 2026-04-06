#include <stdio.h>
#include <math.h>

int main(){
    int lampadas;
    float potencia, largura, comprimento, total_lampadas;
    printf("Digite a largura do cômodo: ");
    scanf("%f", &largura);
    printf("Digite o comprimento do cômodo: ");
    scanf("%f", &comprimento);
    printf("Digite a potência das lâmpadas: ");
    scanf("%f", &potencia);
    total_lampadas = (largura*comprimento*18)/potencia;
    lampadas = ceil(total_lampadas);
    printf("\n O número de lâmpadas necessárias é: %d",lampadas);

    return 0;
}