/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

struct RegInt
{
    
    int num;
    struct RegInt *prox;
    
};

int buscaLista(struct RegInt *p, int k)
{
    struct RegInt *q;
    
    int achei = 0;
    
    q = p;
    
    while(q != NULL)
    {
        if(q->num == k)
        {
            achei = 1;
            break;
        }
        
        q = q->prox;
    }
    return achei;
}

void imprimiLista(struct RegInt *p)
{
    
    struct RegInt *q;
    
    printf("\n \n");
    
    q = p;
    
    while(q != NULL)
    {
        
        printf("%d ", q->num);
        q = q->prox;
        
    }
     
     printf("\n \n");   
}

int main()
{
    int res, k = 13;
    
    struct RegInt *pLista, *a, *b, *c, *d;
    
    a = malloc(sizeof(struct RegInt)); 
    b = malloc(sizeof(struct RegInt));
    c = malloc(sizeof(struct RegInt));
    d = malloc(sizeof(struct RegInt)); 
    
    a->num = 2; a->prox = b;
    b->num = 7; b->prox = c;
    c->num = 13; c->prox = d;
    d->num = 5; d->prox = NULL;
    
    pLista = a;
    
    imprimiLista(pLista);
    
    res = buscaLista(pLista, k);
    if (res != 0) printf("O elemento %d esta na lista.", k);
    else        printf("O elemento %d não está na lista.", k);
    
    
}