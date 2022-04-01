#include <stdio.h>
#include <stdlib.h>
#define MAX 50

typedef struct{
    int x;
} REGISTRO;

typedef struct {
    REGISTRO A[MAX];
    int      topo;
} LISTA;

int main()
{
    LISTA* lista;
    void inicializarpilha(LISTA* l);
    
    inicializarpilha(lista);
    printf("o topo da pilha é igual a %d", lista->topo);

    return 0;    
}

void inicializarpilha(LISTA* l){
    l->topo = -1;
}