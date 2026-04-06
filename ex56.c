#include <stdio.h>

int main(){
    int v1, v2, operacao;
    float resultado;

    printf("Digite o primeiro valor inteiro: ");
    scanf("%d", &v1);
    printf("Digite o segundo valor inteiro: ");
    scanf("%d", &v2);

    printf("\nEscolha a operação:\n1. Adição\n2. Subtração\n3. Divisão\n4. Multiplicação\nDigite o número da operação: ");
    scanf("%d", &operacao);

    if (operacao == 1){
        resultado = v1 + v2;
        printf("\nResultado da adição: %.0f\n", resultado);
    } 
    else if (operacao == 2){
        resultado = v1 - v2;
        printf("\nResultado da subtração: %.0f\n", resultado);
    } 
    else if (operacao == 3){
        if (v2 != 0){
            resultado = (float)v1 / v2;
            printf("\nResultado da divisao: %.2f\n", resultado);
        } else {
            printf("\nErro: Não é possivel dividir por zero\n");
        }
    } 
    else if (operacao == 4){
        resultado = v1 * v2;
        printf("\nResultado da multiplicação: %.0f\n", resultado);
    }

    return 0;
}