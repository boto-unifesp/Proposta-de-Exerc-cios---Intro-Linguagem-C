#include <stdio.h>

int main(){
    float c, f;
    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%f", &f);
    c = ((f - 32)/9)*5;
    printf("A temperatura em Celsius é: %.2f", c);

    return 0;
}