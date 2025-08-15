#include <stdio.h>

void troca(int *a, int *b);

int main(){

    return 0;
}

void troca(int *a, int *b){

    int temp;
    temp=*a;
    *a=*b;
    *b=temp;

}