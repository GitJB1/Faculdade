#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int elementosConjunto = 0;
    srand(time(NULL));

    while(elementosConjunto < 1){
        printf("Digite o valor de n: ");
        scanf("%d", &elementosConjunto);
        if(elementosConjunto < 1){
            printf("Entrada inválida...\n");
        }
    }
    printf("Entrada validada!!\n");

    int conjunto[elementosConjunto];
    for(int i = 0; i < elementosConjunto; i++){
        conjunto[i] = rand() % 200 - 100;
        printf("%d\n", conjunto[i]);
    }

    int soma_positivos = 0;
    int soma_negativos = 0;
    int quantidade_positivos = 0;
    int quantidade_negativos = 0;

    for(int i = 0; i < elementosConjunto; i++){
        if(conjunto[i] > 0){
            soma_positivos += conjunto[i];
            quantidade_positivos++;
        } else {
            soma_negativos += conjunto[i];
            quantidade_negativos++;
        }
    }

    printf("%d valores são positivos, %d valores são negativos\n Soma dos postivos = %d\n Soma dos negativos = %d\n", quantidade_positivos, quantidade_negativos, soma_positivos, soma_negativos);
    
    return 0;
}