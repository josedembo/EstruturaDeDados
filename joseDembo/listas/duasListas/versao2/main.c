#include <stdio.h>
#include <stdlib.h>

int main(){

    int L1[10] = {10, 7, 45, 93, 20, 105, 23, 12, 11, 96};
    int L2[10] = {45, 77, 1, 3, 81, 95, 47, 93, 17, 68}, A[10], contador, maior, i, j;
    // int A[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

    // Encontrando o maior valor da lista 2
    maior = L2[0];
    for (i = 1; i < 10; i++){
        if( L2[i] > maior){
            maior = L2[i];
        }
    }

    // Verificando valores em L1 que são maiores que o maior de L2
    for(i = 0; i < 12; i++){ // 
        if (L1[i] > maior){
            contador = contador +1;
        }
    }

    printf("Existem %d elementos em L1 maiores que todos os elementos de L2\n", contador);

    return 0;
}