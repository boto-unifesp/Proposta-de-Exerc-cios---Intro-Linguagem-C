#include <stdio.h>
#include <math.h>

int main(){
    float n1, n2, optativa, media;
    printf("Digite a nota da primeira prova: \n");
    scanf ("%f", &n1);
    printf("Digite a nota da segunda prova: \n");
    scanf ("%f", &n2);
    printf("Digite a nota da prova optativa: \n");
    scanf ("%f", &optativa);
    if (n1< optativa && n1<n2){
        n1 = optativa;
    }
    else if (n2< optativa){
        n2 = optativa;
    }
    media = (n1+n2)/2;

    if (media>=6){
        printf ("Aprovado\n");
    }
    else if (media >= 3 && media <6){
        printf ("Exame\n");
    }
    else{
        printf ("Reprovado\n");
    }
    return 0;
}