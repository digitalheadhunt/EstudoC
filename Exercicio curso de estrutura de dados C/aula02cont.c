#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

#define alturaMax 225;

typedef struct {
    int peso;
    int altura;
} pessoa;


int main()
{
    pessoa* person = (pessoa*) malloc(sizeof(pessoa));

    person->peso = 80;
    person->altura = 120;

    printf("O peso é de de %i  e a altura é de %i", person->peso, person->altura);
    
    return 0;
}