#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

int main(){
    //QUESTAO 1:


    //entrada dos valores
     string nomes[15];
     printf("Digite os nomes dos alunos:\n");
     for(int i=0; i <= 14; i++) {
        getline(cin, nomes[i]);
     }

     double notasPFN[15];
     printf("Digite as medias de PROGRAMACAO FUNCIONAL dos alunos: use '.' como separador decimal, ex: 1.7\n");
     for(int i=0; i <= 14; i++) {
        cin >> notasPFN[i];
     }

     double notasAGT[15];
     printf("Digite as medias de ALGORITMOS dos alunos: use '.' como separador decimal, ex: 1.7\n");
     for(int i=0; i <= 14; i++) {
        cin >> notasAGT[i];
     }

     //mostra resultados:
     int quantidadeAcimaDaMediaAmbasMaterias = 0;
     string resultado;
     for(int i=0; i <= 14; i++){
      if (notasAGT[i] >= 7 && notasPFN[i] >= 7){
         quantidadeAcimaDaMediaAmbasMaterias += 1;
         resultado = "Acima da media em ambas as materias";
      } else {
         resultado = "Nao atingiu a media em ambas as materias";
      }

      cout << nomes[i] << ": " << "AGT: " << notasAGT[i] << " PFN: " << notasPFN[i] << " Resultado: " << resultado << endl;
      
     }
     
     cout << endl << "Quantidade de alunos acima da media: " << quantidadeAcimaDaMediaAmbasMaterias;


    return 0;
}