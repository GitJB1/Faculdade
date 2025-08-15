#include <stdio.h>

void append(float array[], int tam, float n);

void main(){
    const int TAM_LISTA = 20;
    float lista[TAM_LISTA];
    for(int i = 0; i < TAM_LISTA; i++){
        lista[i] = -1;
    }

    append(lista, TAM_LISTA, 2.1);
    append(lista, TAM_LISTA, 12.45);
    append(lista, TAM_LISTA, 4.21);

    for (int i = 0; i < TAM_LISTA; i++){
        printf("[%d]: %.2f\n", i, lista[i]);
    }
    

}

// n = valor a ser adicionado no array
void append(float array[], int tam, float n){ 
    for(int i = 0; i < tam; i++){
        if(array[i] == -1){
            array[i] = n;
            return;
        }
    }
    printf("ERRO! Array Cheio!!");
}