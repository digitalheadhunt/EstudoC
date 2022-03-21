#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

#define alturaMaxima 225;
typedef struct {
    int peso;
    int altura;
}pessoa;

int main()
{
    /*
    * USANDO A estrutura o código segue assim;
    *pessoa pessoa1;
    *pessoa1.peso = 80;
    *pessoa1.altura = 120;
    *printf("O peso é %i e a altura é %i", pessoa1.peso, pessoa1.altura);
    */

   /*Usando allocação dinamica*/

   pessoa* pessoa2 = (pessoa*) malloc(sizeof(pessoa));
   pessoa2->peso = 80;
   pessoa2->altura = 120;

   printf("O peso é %i e a altura é %i", pessoa2->peso,pessoa2->altura);

   return 0;
}