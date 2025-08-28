#include <stdio.h>
#include <stdlib.h>

#define GREEN "\x1B[36m"
#define RESET "\x1B[0m"

/* Desenvolva um algoritmo que mostre os números de n até 1 destacando os números divisíveis por 5*/

int main(){

    int numeroDigitado = 0;
    while(numeroDigitado <= 0){
        printf("Digite um número inteiro > 0: ");
        scanf("%d", &numeroDigitado);
        if( numeroDigitado <= 0){
            printf("Entrada inválida...\n");
        }
    }

    for(int i = numeroDigitado; i > 0; i--){
        if(i % 5 == 0){
            printf(GREEN"[%d]", i);
            printf(RESET);
        } else {
            printf("%d", i);
        }
        printf(" ");
    }

    return 0;

}