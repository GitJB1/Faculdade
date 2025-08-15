#include <iostream>

using namespace std;

int main(){
    int idade;
    string categoria;
    cout << "Escreva sua idade: ";
    cin >> idade;

    if (idade > 17){
        categoria = "Adulto";
    } else if (idade > 13) {
        categoria = "Juvenil B";
    } else if (idade > 10) {
        categoria = "Juvenil A";
    } else if (idade > 7) {
        categoria = "Infantil B";
    } else if (idade > 5) {
        categoria = "Infantil A";
    } else {
        categoria = "Sem categoria";
    }

    cout << "Voce participa da categoria: " << categoria << endl;

    return 0;
}