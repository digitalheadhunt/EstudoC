#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

typedef int CHAVE;
typedef struct{
    CHAVE id;
}REGISTRO;

typedef struct {
    REGISTRO A[50];
    int nrmElem;
}LISTA;

int main ()
{
    LISTA* lis = (LISTA*) malloc(sizeof(LISTA));
    REGISTRO elemento;
    int inserirElem(LISTA* lis, CHAVE reg, int index);
    printf("Inserindo dados na lista...: \n");
    int index,key;
    for(int y =0; y < 10; y++){
        lis->A[y].id = y;
        lis->nrmElem += 1;
    }

    printf("Lista \n\" ");
    for(int i = 0; i < lis->nrmElem; i++){
        printf("%i \n",lis->A[i].id);
    }
    printf("\"\n");
    char decision;
    printf("Deseja inserir um elemento na lista? \n");
    scanf("%c",&decision);
    
        printf("Digite o registro que voce quer adicionar: \n");
        scanf("%i", &key);
        printf("Em qual indice você quer inserir? \n");
        scanf("%i",&index);

        inserirElem(lis, key, index);
    
    return 0;

}

int ExibirLista(LISTA* l)
{
    return l->nrmElem;
}

int inserirElem(LISTA* lis, CHAVE reg, int index)
{
    if(lis->nrmElem == 50 || index < 0 || index > 50) return -1;
    else{
        for(int w = lis->nrmElem; w > index; w--){
            lis->A[w].id = lis->A[w-1].id;
        }
        lis->A[index].id = reg;
    } 
    printf("Lista \n\" ");
    for(int i = 0; i < lis->nrmElem; i++){
        printf("%i \n",lis->A[i].id);
    }
    printf("\"\n");

}
