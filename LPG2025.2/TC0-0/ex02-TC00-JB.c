#include <stdio.h>
#include <stdlib.h>

/* Desenvolva um algoritmo que mostre os números primos no intervalo de n2 até n1 tal que n2 > n1 e n1 e n2 sejam inteiros positivos*/

int ehPrimo(int n){
    for(int i = 2; i < n; i++){
        if(n % i == 0){
            return 0; // 0 -> falso
        }
    }
    return 1; // 1 -> verdadeiro
}

int main(){
    int numero1 = 0;
    int numero2 = 0;
    while(numero2 < numero1 || numero1 < 1 || numero2 < 1){
        printf("Digite o valor de n1: ");
        scanf("%d", &numero1);
        printf("Digite o valor de n2: ");
        scanf("%d", &numero2);
        if(numero2 < numero1 || numero1 < 1 || numero2 < 1){
            printf("Entrada inválida...\n");
        }
    }
    printf("Entrada validada!!\n\n");

    for(int i = numero2; i > numero1; i--){
        if(ehPrimo(i) == 1){
            printf("%d ", i);
        }
    }
    
    return 0;
}