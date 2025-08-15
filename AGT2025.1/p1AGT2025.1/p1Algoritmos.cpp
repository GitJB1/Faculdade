#include <iostream>
#include <string>

using namespace std;

int main(){
    //Usuario
    string cliente;
    string rua;
    string cep;
    string estado;

    //Computadores
    /*
    1 - MacBook -> +10% Aliquota
    2 - Pc Intel Core i5
    3 - Pc Gamer Completo AMD
    */
    int computador;
    double precoMacBook = 9599;
    double precoIntel = 1589;
    double precoAMD = 2748;

    //Alimentos
    int cafe;
    double precoCafe = 57.04;
    int popcorn;
    double precoPopcorn = 1.88;
    int cremeLeite;
    double precoCremeLeite = 6.57;
    int macarrao;
    double precoMacarrao = 7.7;
    double laranja; //quantidade em kg
    double precoLaranja = 8.15;

    //Impostos e frete
    double taxaAliquota = 0.1;
    double valorAliquota;
    double icms;
    double frete;

    //Outras variaveis
    char respostaSN;
    int valorComputador = 0;
    int valorAlimentos = 0;
    int valorTotal = 0;

    // Inicia a secao de compra
    cout << "Bem vindo a sua secao de compra: " << endl;
    cout << "Digite seu PRIMEIRO NOME: ";
    cin >> cliente;
    cout << "Digite sua rua(Nome da Rua, numero casa): ";
    cin >> rua;
    cout << "Digite seu cep(1234567): ";
    cin >> cep;
    cout << "Digite seu estado(abreviação em duas letras MAIÚSCULAS, ex: SP, SC, RS, PR, RJ...): ";
    // Categoria 1: COMPUTADORES
    cout << "---------------------------------" << endl;
    cout << "Comprar na Categoria COMPUTADORES(s/n)?" << endl;
    cin >> respostaSN;

    if(respostaSN == 's'){
        cout << "---------------------------------" << endl;
        cout << "Qual COMPUTADOR deseja comprar?" << endl;
        cout << "1 - Apple MacBook: R$9.599,00\n2 - Pc Intel Core i5: R$1589,00\n3 - Pc Gamer Completo AMD: R$2.748,00" << endl;
        cin >> computador;

        if (computador < 1 || computador > 3){
            cout << "Resposta invalida" << endl;
            return 0;
        }

    } else if(respostaSN != 'n'){
        cout << "Resposta invalida" << endl;
        return 0;
    } else {
        computador = 0;
    }

    // Categoria 2: ALIMENTOS
    cout << "---------------------------------" << endl;
    cout << "Comprar na Categoria ALIMENTOS(s/n)?" << endl;
    cin >> respostaSN;

    if(respostaSN == 's'){
        //cafe
        cout << "---------------------------------" << endl;
        cout << "Comprar cafe R$57,04/un?(s/n)" << endl;
        cin >> respostaSN;
        if(respostaSN = 's'){
            cout << "Quantas unidades?" << endl;
            cin >> cafe;
        } else if(respostaSN != 'n') {
            cout << "Resposta invalida" << endl;
            return 0;
        } else {
            cafe = 0;
        }

        //popcorn
        cout << "---------------------------------" << endl;
        cout << "Comprar popcorn R$1,88/un?(s/n)" << endl;
        cin >> respostaSN;
        if(respostaSN = 's'){
            cout << "Quantas unidades?" << endl;
            cin >> popcorn;
        } else if(respostaSN != 'n') {
            cout << "Resposta invalida" << endl;
            return 0;
        } else {
            popcorn = 0;
        }

        //creme de leite
        cout << "---------------------------------" << endl;
        cout << "Comprar creme de leite R$6,57/un?(s/n)" << endl;
        cin >> respostaSN;
        if(respostaSN = 's'){
            cout << "Quantas unidades?" << endl;
            cin >> cremeLeite;
        } else if(respostaSN != 'n') {
            cout << "Resposta invalida" << endl;
            return 0;
        } else {
            cremeLeite = 0;
        }

        //macarrao
        cout << "---------------------------------" << endl;
        cout << "Comprar macarrao R$7,70/un?(s/n)" << endl;
        cin >> respostaSN;
        if(respostaSN = 's'){
            cout << "Quantas unidades?" << endl;
            cin >> macarrao;
        } else if(respostaSN != 'n') {
            cout << "Resposta invalida" << endl;
            return 0;
        } else {
            macarrao = 0;
        }

        //laranja
        cout << "---------------------------------" << endl;
        cout << "Comprar laranja R$8,15/kg?(s/n)" << endl;
        cin >> respostaSN;
        if(respostaSN = 's'){
            cout << "Quantos quilos(kg)?" << endl;
            cin >> laranja;
        } else if(respostaSN != 'n') {
            cout << "Resposta invalida" << endl;
            return 0;
        } else {
            laranja = 0;
        }


    } else if(respostaSN != 'n'){
        cout << "Resposta invalida" << endl;
        return 0;
    }

    if(estado != "SP"){
        icms = 0.05;
    } else {
        icms = 0;
    }

    //Printar pedido final
    cout << "---------------------------------" << endl;
    cout << cliente << endl;
    cout << "Pedido: " << endl;
    switch(computador){
        case 1:
            valorAliquota = precoMacBook * taxaAliquota;
            valorComputador = precoMacBook + valorAliquota;
            cout << "Apple: R$" << valorComputador << endl;
            break;
        case 2:
            valorComputador = precoIntel;
            cout << "Pc Intel: R$" << valorComputador << endl;
            break;
        case 3:
            valorComputador = precoAMD;
            cout << "Pc Gamer AMD: R$" << valorComputador << endl;
            break;
    }
    if(cafe > 0){
        valorAlimentos += precoCafe * cafe;
        cout << "Cafe: R$" << (precoCafe * cafe) << endl;
    }
    if(popcorn > 0){
        valorAlimentos += precoPopcorn * popcorn;
        cout << "Popcorn: R$" << (precoPopcorn * popcorn) << endl;
    }
    if(cremeLeite > 0){
        valorAlimentos += precoCremeLeite * cremeLeite;
        cout << "Creme de Leite: R$" << (precoCremeLeite * cremeLeite) << endl;
    }
    if(macarrao > 0){
        valorAlimentos += precoMacarrao * macarrao;
        cout << "Macarrao: R$" << (precoMacarrao * macarrao) << endl;
    }
    if(laranja > 0){
        valorAlimentos += precoLaranja * laranja;
        cout << "Laranja: R$" << (precoLaranja * laranja) << endl;
    }

    valorTotal = valorAlimentos + valorComputador;
    if(valorTotal > 1500) {
        frete = 80;
        cout << "Frete: R$" << frete << endl;
    } else {
        cout << "Frete: gratis" << endl;
    }
    cout << "Entrega: " << endl;
    cout << rua << ". " << "Cep " << cep << " " << estado;


    return 0;
}