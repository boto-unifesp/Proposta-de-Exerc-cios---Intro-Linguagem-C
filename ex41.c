#include <stdio.h>
#include <math.h>

int main(){
    int n1, n2;
    printf("Digite o primeiro valor: ");
    scanf ("%d", &n1);
    printf("Digite o segundo valor: ");
    scanf ("%d", &n2);
  
    if (n1 == n2){
        printf ("Números iguais");
    }
    else if (n1 > n2){
            printf ("O primeiro é maior");
    }
        else {
            printf ("O segundo é maior");
        }

return 0;
}