#include <stdio.h>

int main(){
    float cm, m;
    printf("Digite o valor em metros: ");
    scanf("%f", &m);
    cm = m * 100;
    printf("O valor em centímetros é: %.2f", cm);

return 0;
}