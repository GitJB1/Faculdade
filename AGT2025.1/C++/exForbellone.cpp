#include <iostream>

using namespace std;

int main(){
    char sexo;
    double pesoIdeal, altura;

    cout << "Digite seu sexo('M': Masculino 'F': Feminino): ";
    cin >> sexo;
    if (sexo != 'M' && sexo != 'F'){
        cout << "Sexo fora do escopo";
    } else {
        cout << "Digite sua altura: ";
        cin >> altura;

        if ( sexo == 'M'){
            pesoIdeal = 72.7 * altura - 58;
        } else {
            pesoIdeal = 62.1 * altura - 44.7;

        }
        cout << "Seu peso ideal eh: " << pesoIdeal;
    }  
    return 0;
}