#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[]){
    int a, b, soma;
    
    printf("\n%s", argv[0]);
    printf("\n%s", argv[1]);
    printf("\n%s", argv[2]);
    a = atoi(argv[1]);
    b = atoi(argv[2]);

    soma = a + b;
    printf("\nSoma: %i", soma);


    return 0;
}