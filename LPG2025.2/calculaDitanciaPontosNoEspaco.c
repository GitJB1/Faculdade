#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>


/*
Objetivos do programa:
Gerar n pontos 3D conforme digitado pelo usuário
Calcular a distância entre todos os pontos no espaço
Calcular a menor distância
Calcular a maior distância
*/

int fat(int n);

int main(){
    srand(time(NULL));

    // Pergunta quantos pontos vão ser gerados:
    int numero_pontos;
    printf("Digite um número n inteiro, maior que 2: ");
    scanf("%d", &numero_pontos);
    while (numero_pontos < 2){
        if (numero_pontos < 2){
            printf("Erro, digite novamente: ");
            scanf("%d", &numero_pontos);
        }
    }

    // Gera os vetores que vão armazenar os pontos
    float x[numero_pontos], y[numero_pontos], z[numero_pontos];
    for(int i = 0; i < numero_pontos; i++){
        x[i] = rand() % 1000/100.0;
        y[i] = rand() % 1000/100.0;
        z[i] = rand() % 1000/100.0;
        //printf("Novo Ponto(%d) = [%.2f, %.2f, %.2f]\n", i + 1, x[i], y[i], z[i]);
    }

    // Calcula o número de combinações
    int numero_combinacoes = fat(numero_pontos) / (2*fat(numero_pontos-2));

    // Calcula a distância entre os pontos:
    // d = √((x₂ - x₁)² + (y₂ - y₁)² + (z₂ - z₁)²)
    float distancia_entre_pontos[numero_combinacoes];

    // Aqui um duplo for para iterar sobre as diferentes combinações e fazer o calculo da distância entre dois pontos. Armezena o resultado do calculo em distancia_entre_pontos
    // Usa 'contador' para acessar o índice de distacia_entre_pontos
    int contador = 0;
    float maior_distancia = 0;
    float menor_distancia = 2000000000000;
    for(int i = 0; i < numero_pontos; i++){
        for(int j = i + 1; j < numero_pontos; j++){
            distancia_entre_pontos[contador] =
            sqrt(
                pow(x[j] - x[i],2) +
                pow(y[j] - y[i],2) +
                pow(z[j] - z[i],2));
                
            printf("(%d)<%d><%d>: %f\n",(contador+1), (i+1), (j+1), distancia_entre_pontos[contador]);
            if(distancia_entre_pontos[contador] > maior_distancia){
                maior_distancia = distancia_entre_pontos[contador];
            }
            if(distancia_entre_pontos[contador] < menor_distancia){
                menor_distancia = distancia_entre_pontos[contador];            
            }
            contador++;
        }
    }


    //Imprime a mensagem final na tela
    printf("\n===================================\nNúmero de combinações: %d\n", numero_combinacoes);
    printf("Maior distância: %f\n", maior_distancia);
    printf("Menor distância: %f\n", menor_distancia);


    return 0;

}

// Função que calcula o fatorial de um número n
int fat(int n){
    for(int i = n -1; i >= 1; i--){
        n = n * i;
    }
    return n;
}