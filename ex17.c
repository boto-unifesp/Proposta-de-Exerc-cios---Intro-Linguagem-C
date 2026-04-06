#include <stdio.h>

int main(){
    float raio, area;
    printf("Digite o valor do raio: ");
    scanf("%f", &raio);
    area = 3.14*raio*raio;
    printf("\n A area do circulo é: %.2f", area);

    return 0;
}