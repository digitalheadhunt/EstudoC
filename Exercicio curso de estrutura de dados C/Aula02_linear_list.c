#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

#define MAX 50;
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
    int buscarNaLista(LISTA* lis, CHAVE ch);
    int buscaBinaria(LISTA* lis, CHAVE ch);
    printf("Inserindo dados na lista...: \n");
    int index,key,ch;
    for(int y =0; y < 50; y++){
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
        printf("Digite o numero que vc quer ver o endereço na lista...: \n");
        scanf("%i",&ch);
        printf("o elemento procurado está no indice %i", buscarNaLista(lis, ch));
        printf("O elemento procurado está no indice %i", buscaBinaria(lis, ch));
    return 0;

}

int ExibirLista(LISTA* l)
{
    return l->nrmElem;
}

int inserirElem(LISTA* lis, CHAVE reg, int index)
{
    /*
     This is a insertion like a insertion sort. 
    */
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

int buscarNaLista(LISTA* lis, CHAVE ch)
{
    int i = 0;
    /*
     This is a linear search here im just passing throght all elements
     and see if the element im passing now is equals the element im looking for
     if he is I'll return their key, to show where he is located, if he is not found 
     I'll return -1, in that case my element is not in my list.
    */
    while(i < lis->nrmElem){
        if(lis->A[i].id == ch) return i;
        printf("iteração %i \n",i);
        i++;
    }
    return -1;
}

int buscaBinaria(LISTA* lis, CHAVE ch){
    int esq,dir,meio,count;
    esq = 0;
    dir = lis->nrmElem-1;
    while(esq <= dir){
        meio = ((esq + dir)/2);
        count ++;
        printf("iteração..: %i \n",count);
        if(lis->A[meio].id == ch) return meio;
        else {
            if(lis->A[meio].id < ch) esq = meio +1;
            else dir = meio -1;
        }
    }
    

}
