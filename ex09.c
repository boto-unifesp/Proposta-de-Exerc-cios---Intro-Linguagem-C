#include <stdio.h>

int main(){
    float lado, area;
    printf("Digite o valor do lado do quadrado: ");
    scanf("%f", &lado);
    area = lado * lado;
    printf("A área do quadrado é: %.1f", area);
    printf(" O dobro dessa área é: %.1f", area * 2);

return 0;
}