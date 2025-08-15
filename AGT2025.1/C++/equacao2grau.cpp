#include <iostream>
#include <cmath>

using namespace std;

int main(){

    double a, b, c, root1, root2;
    cin >> a;
    cin >> b;
    cin >> c;


    double delta = pow(b, 2)-4*a*c;
    if (delta < 0){
      cout << "Delta negativo, sem raiz no conjunto dos numeros reais" << endl;
    } else if(delta == 0) {
        root1 = (-b + sqrt(delta)) / 2*a;
        cout << root1 << endl;
    } else {
        root1 = (-b + sqrt(delta)) / 2*a;
        root2 = (-b - sqrt(delta)) / 2*a;
        cout << root1 << endl << root2 << endl;
    }

}