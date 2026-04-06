#include <stdio.h>

int main() {
    float a1, a2, a3;

    printf("Digite o primeiro ângulo: ");
    scanf("%f", &a1);
    printf("Digite o segundo ângulo: ");
    scanf("%f", &a2);
    printf("Digite o terceiro ângulo: ");
    scanf("%f", &a3);

    if (a1 + a2 + a3 != 180){
        printf("\nErro: Não é um triângulo\n");
    }
    else if (a1 == 90 || a2 == 90 || a3 == 90){
        printf("\nTriângulo retângulo\n");
    }
    // Lógica para Triângulo Obtusângulo (algum deles é maior que 90)
    else if (a1 > 90 || a2 > 90 || a3 > 90){
        printf("\nTriângulo obtusângulo\n");
    }
    else{
        printf("\nTriângulo acutângulo\n");
    }

    return 0;
}