#include <stdio.h>
#include <stdlib.h>

void imprimeLista(int lista[], int tamanho);

int main()
{
    int L1[10] = {10, 7, 45, 93, 20, 105, 23, 12, 11, 96};
    int L2[10] = {45, 77, 1, 3, 81, 95, 47, 93, 17, 68}, A[10], contador, i, j, achei;
    // int A[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    // int N = 10;

    // Contagem dos valores da lista L1 maiores que os valores da lista L2
    // Em seguida adiconando os quantidade de maiores na posição do correspondente da Lista L1
    // na lista A

    for (i = 0; i < 10; i++)
    {
        contador = 0;
        for (j = 0; j < 10; j++)
        {
            if (L1[i] > L2[j])
            {
                contador = contador + 1;
            }
        }

        // Adicona a quantidade de maiores na lista A
        A[i] = contador;
    }
    imprimeLista(L1, 10);
    imprimeLista(A, 10);
    contador = 0;
    for (i = 0; i < 10; i++)
    {
        if (A[i] == 10)
        {
            contador = contador + 1;
        }
    }

    printf("Existem %d elementos em L1 maiores que todos os elementos de L2\n", contador);

    return 0;
}

void imprimeLista(int Lista[], int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        printf("%d ", Lista[i]);
    }
    printf("\n");
}