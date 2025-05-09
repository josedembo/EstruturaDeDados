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
    q=p;
    while(q!= NULL)
    {
        printf("%d ", q->num);
        q = q->prox;
    }
    printf("\n\n");

}

int buscaLista(struct RegInt *p, int k){
    struct RegInt *q;
    int achei = 0;
    q = p;

    while(q != NULL){
        if(q->num == k){
            achei = 1;
            break;
        }
        q = q -> prox;
    }
    return(achei);
}
struct RegInt* insereFim(struct RegInt *p, int k){
    struct RegInt *q, *r;
    q = p;
    while(q->prox != NULL){
        q = q->prox;
    }
    r = malloc(sizeof(struct RegInt));
    r->num = k;
    r->prox = NULL;
    q->prox = r;
    return p;

}

int main(){
    struct RegInt *pLista, *a, *b, *c, *d;
    int res, k = 43;

    
    
    a = malloc(sizeof(struct RegInt));
    b = malloc(sizeof(struct RegInt));
    c = malloc(sizeof(struct RegInt));
    d = malloc(sizeof(struct RegInt));
    
    a ->num = 7;        a ->prox = b;
    b ->num = 9;        b ->prox = c;
    c ->num = 13;        c ->prox = d;
    d ->num = 2;        d ->prox = NULL;
    
    pLista = a;
    
    imprimeLista(pLista);
    res = buscaLista(  pLista, k);
    if(res == 1)
        printf("O elemento %d esta na lista", k);
    else
        printf("O elemento %d nao esta na lista", k);

    printf("\n \n");

    pLista = insereFim(pLista, 47);
    imprimeLista(pLista);
    pLista = insereFim(pLista, 8);
    imprimeLista(pLista);
}
