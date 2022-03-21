#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#define MAX 50;
typedef int ID;

typedef struct {
    ID id;
    char *nome[10];
    int registro;
    int temosOproduto;
} REGISTRO;

typedef struct {
    REGISTRO total[50];
    int nmrDeElementos;
} LISTA;

int main()
{
    REGISTRO reg;
    LISTA *l;
    int chose;
    int ExibirElementos(LISTA* l);
    printf("Inicializando o sistema......:\n");
    printf("Escolha a operação que será feita...:\n");
    printf("Mostar a listagem: 0 \n Inserir um elemento: 1 \n");
    scanf("%i",&chose);
    if(chose == 1){
        printf("teste \n");
    } else if (chose == 0) {
        ExibirElementos(&l);
    }

   
    return 0;
}

int ExibirElementos(LISTA* l)
{
    int nmr =0;

    if(l->nmrDeElementos == 0){
        printf("A lista não possui elementos \n");
    } else {
        for(nmr; nmr <= l->nmrDeElementos; nmr++){
            printf("Nome do produto: %s \n ID ......: %i ",l->total->nome,l->total->id);
        }
    }
}