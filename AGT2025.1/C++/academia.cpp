#include <string>
#include <stdio.h>
#include <windows.h>

using namespace std;

int main(){
    char escolhaTreino;
    string treino;
    string cliente;
    char periodo;
    char adesao;
    double preco;

    // Recebendo o nome:
    printf("Digite o seu primeiro nome: ");
    scanf("%s", cliente);
    system("cls");

    // Recebendo a opcao de treino:
    printf("Escolha sua opcao de treino:\na)Natacao\nb)Musculacao\nc)Treinamento Funcional\nd)Plano Seco: Musculacao + Funcional\ne)Plano Molhado: Musculacao + Natacao");
    printf("\n\nResposta: ");
    scanf("%c", escolhaTreino);
    system("cls");

    // Recebendo a opcao de periodo:
    printf("Escolha o seu periodo de treino:\nDia(d)\nNoite(n)");
    printf("\n\nResposta: ");
    scanf("%c", periodo);
    system("cls");
    if(periodo !=  'd' && periodo != 'n'){
        printf("Nao foi possivel identificar sua opcao de periodo");
        system("pause");
        exit(0);
    }

    // Recebendo a opcao de adesao:
    if(escolhaTreino != 'd' && escolhaTreino != 'e'){
        printf("Escolha sua forma de pagamento:\nMensal(m)\nAnual(a)");
        printf("\n\nResposta: ");
        scanf("%c", adesao);
        system("cls");
        if(adesao != 'm' && adesao != 'a') {
            printf("Nao foi possivel identificar sua forma de pagamento");
            system("pause");
            exit(0);
        }
    } else {
        adesao = 'a';
    }

    switch(escolhaTreino){
        case 'a':
            treino = "Natacao";
            break;
        case 'b':
            treino = "Musculacao";
            break;
        case 'c':
            treino = "Treinamento funcional";
            break;
        case 'd':
            treino = "Plano Seco: Musculacao + funcional";
            break;
        case 'e':
            treino = "Plano Molhado: Musculacao + funcional";
            break;
        default:
            printf("Nao possivel identificar sua escolha de treino");

    }


}