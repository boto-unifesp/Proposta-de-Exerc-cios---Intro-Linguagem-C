#include <stdio.h>

int main(){
    int eleitores, votos_validos, votos_brancos, votos_nulos;
    float percentual_brancos, percentual_nulos, percentual_validos;
    printf("Digite o número total de eleitores: ");
    scanf("%d", &eleitores);
    printf("Digite o número de votos válidos: ");
    scanf("%d", &votos_validos);
    printf("Digite o número de votos brancos: ");
    scanf("%d", &votos_brancos);
    printf("Digite o número de votos nulos: ");
    scanf("%d", &votos_nulos);
    percentual_brancos = votos_brancos*100/eleitores;
    percentual_nulos = votos_nulos*100/eleitores;
    percentual_validos = votos_validos*100/eleitores;
    printf("\nO percentual de votos válidos é: %.2f", percentual_validos);
    printf("\nO percentual de votos brancos é: %.2f", percentual_brancos);
    printf("\nO percentual de votos nulos é: %.2f", percentual_nulos);

    return 0;
}