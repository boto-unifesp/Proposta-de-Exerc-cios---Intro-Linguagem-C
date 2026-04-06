#include <stdio.h>

int main(){
    int lados;
    float medida, resultado;

    printf("Digite o numero de lados: ");
    scanf("%d", &lados);
    printf("Digite a medida do lado: ");
    scanf("%f", &medida);

    if (lados < 3){
        printf("Não é um polígono");
    }
    else if (lados == 3){
        resultado = medida*3;
        printf("\nTriângulo");
        printf("\nO valor do perimetro é: %.2f cm\n", resultado);
    } 
    else if (lados == 4){
        resultado = medida*medida;
        printf("\nQuadrado");
        printf("\nO valor da area é: %.2f cm²\n", resultado);
    } 
    else if (lados == 5){
        printf("\nPentagono\n");
    }
    else {
        printf("Polígono não identificado\n");
    }

    return 0;
}