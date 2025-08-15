#include <iostream>
#include <stdio.h>

using namespace std;

int main(){

    int maiorValor = 0;
    int menorValor;
    double media = 0;

    int valorDigitado;

    cout << "Digite um conjunto de 10 numeros reais" << endl;
    for(int i = 0; i < 10; i++){
        cin >> valorDigitado;
        if (valorDigitado > maiorValor) {
            maiorValor = valorDigitado;
        }
        if(valorDigitado < menorValor){
            menorValor = valorDigitado;
        }

        media += valorDigitado;
        
    }

    media = media/10;


    cout << "Maior valor: " << maiorValor << endl;
    cout << "Menor valor: " << menorValor << endl;
    cout << "Media: " << media;

    return 0;
}