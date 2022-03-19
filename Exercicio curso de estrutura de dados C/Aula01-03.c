#include <stdio.h>
#include <malloc.h>

#define MAX 50;
typedef  int CHAVE;
typedef struct {
    char nome[50];
    int idade;
} REGISTRO;

typedef struct{
    REGISTRO A[50];
    int nroElem;
} LISTA;

int main()
{
   int inicializarALista(LISTA* L);
}

int inicializarALista(LISTA* L){
    L->nroElem = 0;
}

int inserirNaLista(LISTA* lis,CHAVE key,REGISTRO* pes)
{
    int i;
    if((key < 0) ||(key > lis->nroElem) || (lis->nroElem == 50)) return -1;
    
    for(i = lis->nroElem; i > key; i--) lis->A[i] = lis->A[i-1]
    return 0;
}