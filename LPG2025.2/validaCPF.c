#include <stdio.h>
#include <stdlib.h>

#define TAMANHO_CPF 11

int calculaPrimeiroDigito(char cpf[TAMANHO_CPF]){
    int primeiro_digito = 0, multiplicador = 2;

    for(int i = TAMANHO_CPF - 3; i >= 0; i--){
        primeiro_digito += ((int)cpf[i] - '0') * multiplicador;
        multiplicador++;
    }

    primeiro_digito = primeiro_digito % 11;
    if(primeiro_digito < 2){
        primeiro_digito = 0;
    } else {
        primeiro_digito = 11 - primeiro_digito;
    }

    return primeiro_digito;
}

int calculaSegundoDigito(char cpf[TAMANHO_CPF]){
    int segundo_digito = 0, multiplicador = 2;

    for(int i = TAMANHO_CPF - 2; i >=0; i--){
        segundo_digito += ((int) cpf[i] - '0') * multiplicador;
        multiplicador++;
    }

    segundo_digito = segundo_digito % 11;
    if(segundo_digito < 2){
        segundo_digito = 0;
    } else {
        segundo_digito = 11 - segundo_digito;
    }
}

int validaCPF(char cpf[TAMANHO_CPF]){
    
}

int main(){
    char cpf[TAMANHO_CPF];
    printf("Digite seu CPF(sem pontos e traço): ");
    scanf("%s", cpf);

    /*
    for(int i = 0; i < TAMANHO_CPF; i++){
        printf("%d", (int)cpf[i] - '0');
    }
    */

    printf("%d%d\n", calculaPrimeiroDigito(cpf), calculaSegundoDigito(cpf));
    return 0;
}