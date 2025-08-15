#include <iostream>

using namespace std;

int main(){
    int valorDigitado;

    cout << "Digite um valor: ";
    cin >> valorDigitado;

    for(int i = 1; i <= 10; i = i + 1){
        cout << valorDigitado << " x " << i << " = " << valorDigitado * i << endl;
    }

    return 0;
}