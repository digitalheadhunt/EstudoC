#include <stdio.h>
#include <stdlib.h>


/*
 *  Here im learning about dynamic memory alocation, trying to use malloc(),
 * to set a variable in a memory slot.
 * 
 * */

void main(void)
{
   printf("Digite um numero para a quantidade de elementos no array: \n");
   
   int allocMalloc(int x);
   
   int index = scanf("%i", &index);	

   allocMalloc(index);	
}

int allocMalloc(int x)
{
	int *vlrArr, i, sum = 0;
	
	vlrArr = (int *) malloc(x*sizeof(int));
	
	if(vlrArr == NULL) {
			printf("Memory not allocated\n");
			return 0;
	}
	
	//here Im just passing through the vetor and show all elements
	printf("->");
	for(i = 0; i < x; i++){
			printf("%i", vlrArr + i);
			sum = sum + *(vlrArr + i);
	}
	
	// I undertood this function will free the memory I think, after passed through all array indice
	free(vlrArr);
	
	printf("Omg Malloc is horrible, why memory allocation is so hard");
	return 0;
}
 
