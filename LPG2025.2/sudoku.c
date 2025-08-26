#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int valor_quadrado_latino = 20;

int gerarNumeroAleatorioDistinto(int *vetor){
    int valor_gerado = 1 + rand() % valor_quadrado_latino;
    for(int i = 0; i < valor_quadrado_latino; i++){
        if(valor_gerado == vetor[i]){
            valor_gerado = gerarNumeroAleatorioDistinto(vetor);
        }
    }
    return valor_gerado;
}

int main(){
    srand(time(NULL));
    printf("Used seed: %ld\n", time(NULL));

    printf("primeira linha: {");
    int primeira_linha[valor_quadrado_latino];
    for(int i = 0; i < valor_quadrado_latino; i++){
        primeira_linha[i] = gerarNumeroAleatorioDistinto(primeira_linha);
        printf("%d ", primeira_linha[i]);
    }
    printf("}\n");

    printf("\n\nIMPRIMINDO QUADRADO LATINO:\n");
    int matriz_quadrado_latino[valor_quadrado_latino][valor_quadrado_latino];
    int deslocamento;
    int fator_deslocamento = 3;
    for(int i = 0; i < valor_quadrado_latino; i++){
        for(int j = 0; j < valor_quadrado_latino; j++){
            deslocamento = (j + fator_deslocamento*i) % valor_quadrado_latino;
            matriz_quadrado_latino[i][j] = primeira_linha[deslocamento];
            printf("%2d ", matriz_quadrado_latino[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}