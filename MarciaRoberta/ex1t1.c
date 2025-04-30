#include <stdio.h>
#include <stdlib.h>

struct RegInt {
    int num;
    struct RegInt *prox;
};

void imprimeLista(struct RegInt *p)
{
    struct RegInt *q;
    
    printf("\n \n");
    
    q = p;
    
    while (q!= NULL)
    {
        printf("%d ", q->num);
        q = q->prox;
    }
    printf("\n \n");
}
int buscaLista(struct RegInt *p, int k)
{
    struct RegInt *q;
    int achei=0;
    
    q=p;
    
    while(q!=NULL)
    {
        if (q->num == k)
        {
            achei =1;
            break;
        }
        q = q->prox;
    }
    return(achei);
}
int main() {
    // Write C code here
    struct RegInt *pLista, *a, *b, *c, *d;
    int k = 13;
    
    a = malloc(sizeof(struct RegInt));
    b = malloc(sizeof(struct RegInt));
    c = malloc(sizeof(struct RegInt));
    d = malloc(sizeof(struct RegInt));
    
    a->num = 2; a->prox = b;
    b->num = 7; b->prox = c;
    c->num = 13; c->prox = d;
    d->num = 5; d->prox = NULL;
    
    pLista = a;
    
    imprimeLista(pLista);

    
     res = buscaLista (pLista, k);
    if (res== 1) printf("O número %d está na lista", k);
    else printf ("O número %d está nao lista", k);
 
}
