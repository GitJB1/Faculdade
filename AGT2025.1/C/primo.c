#include <stdio.h>

void verifica_primo(int numero);

int main(){

    int numero = 0;
    printf("Digite um numero inteiro:");
    scanf("%d", &numero);

    printf("Numero digitado %d\n", numero);

    verifica_primo(numero);
    
    return 0;
}

void verifica_primo(int numero){
    for(int i = 2; i < numero; i = i + 1){
            printf("Verificando divisao de %d por %d \n", numero, i);
            if(numero % i == 0) {
                printf("Numero nao eh primo");
                break;
            }
            if(i == numero - 1){
                printf("Numero eh primo");
            }
        }
}