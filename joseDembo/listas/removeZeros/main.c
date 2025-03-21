#include <stdio.h>
#include <stdlib.h>

void imprimeLista(int lista[], int tamanho);

int main()
{

    int i, j, m, n, aux, L[12] = {3, 9, 2, 0, 0, 7, 0, 0, 5, 0, 0, 0};
    // imprimindo a lista inicial
    printf("Lista inical \n");
    imprimeLista(L, 12);
    // 1ª etapa
    // zerar os valores duplicados
    for (i = 0; i < 12; i++)
    {
        if (L[i] != 0)
        {

            for (j = i + 1; j < 12; j++)
            {
                if (L[i] == L[j])
                {
                    L[j] = 0;
                }
            }
        }
    }
    // Imprimindo a lista depois da primeira etapa
    printf("Lista com os duplicados zerados\n");
    imprimeLista(L, 12);

    // encontrando a posição do m
    for (i = 11; i >= 0; i--)
    {

        if (L[i] != 0)
        {
            m = i;
            break;
        }
    }
    printf("Posicao de m: %d \n", m);

    i = 0;
    aux = 0;
    j = m;
    // Empurrando os zeros para o final da lista
    while (i < j)
    {
        if ((L[i] == 0) && (L[j] != 0))
        {
            aux = L[i];
            L[i] = L[j];
            L[j] = aux;

            i = i + 1;
            j = j - 1;
        }
        else if (L[i] != 0)
        {
            i = i + 1;
        }
        else
        {
            j = j - 1;
        }
    }

    m = j;

    // imprimindo a lista e o valor de m final
    imprimeLista(L, 12);
    printf("valor de m: %d\n", m);
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