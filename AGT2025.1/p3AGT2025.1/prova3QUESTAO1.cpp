#include <stdio.h>
#include <iostream>

using namespace std;

int exame(double notas[][15], int materia, int aluno){
    if(notas[materia][aluno] < 7) {
        return 1;
    } else {
        return 0;
    }
};

int main(){

    // Salvando os valores das notas [0][n] = PNF, [1][n] = CALC, [2][n] = AGT
    double notas[3][15] = {{8.9, 3, 7, 8.5, 9, 1, 7.5, 5.5, 6.5, 4.4, 4, 1.5, 7, 7.8, 6.3},
                        {4, 9, 2, 7, 5, 4.5, 8.3, 4.5, 10, 2.5, 8, 6, 10, 9, 8},
                        {9, 5, 9.7, 5, 7.9, 8.5, 5.5, 9.5, 6, 4, 5.6, 8, 9.2, 7.6, 7}};


    //Calculando media geral das materias e ja calcula a quantidade de alunos em exame
    double mediaGeral[3] = {0,0,0}; // 0 = PFN, 1 = CALC, 2 = AGT
    int alunosEmExame[3]= {0,0,0};
    //Calcula as medias
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 15; j++){
            mediaGeral[i] = mediaGeral[i] + notas[i][j];

            //Verifica se o aluno ficou em exame
            if(notas[i][j] < 7.0) {
                alunosEmExame[i] += 1;
            }
        }
        mediaGeral[i] = mediaGeral[i] / 15;
    }

    //Mostra as notas
    // for(int i = 0; i < 3; i++){
    //     for(int j = 0; j < 15; j++){
    //         cout << notas[i][j] << " | ";
    //     }
    //     cout << endl;
    // }

    cout << "PFN: " << mediaGeral[0] << " Alunos em exame: " << alunosEmExame[0] << endl;
    cout << "CALC: " << mediaGeral[1] << " Alunos em exame: " << alunosEmExame[1] << endl;
    cout << "AGT: " << mediaGeral[2] << " Alunos em exame: " << alunosEmExame[2] << endl;

    //Media mais alta
    double mediaMaisAlta = 0;
    int maisExame = 0;
    for(int i = 0; i < 3; i++){
        if(mediaGeral[i] > mediaMaisAlta) {
            mediaMaisAlta = mediaGeral[i];
        }
        if (alunosEmExame[i] > maisExame) {
            maisExame = alunosEmExame[i];
        }
    }
    
    cout << "Media mais alta: " << mediaMaisAlta << endl;
    cout << "Mais alunos em exame: " << maisExame << endl;
    

    cout << "Nota: " << notas[0][5] << endl << exame(notas, 0, 5);

    return 0;
}