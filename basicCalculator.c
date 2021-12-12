#include <stdio.h>
#include <stdlib.h>

/*
 * 
 * This is my first calculator in c language, Im very excited on learn C,
 * Im a student of programming language, so this is my first project in C
 *  
 */

int main(void)
{
	
	// well I thinking in use this variable to set a integer operation or a float operation
	char isIntOrFloat;
	
	int	calculator(int x, int y);
		
		printf("Welcome to the basic calculator in C lenguage \n");
		printf("We need to know two numbers and one operator, \n");
		printf("If is a Int number chose i else chose f:\n");
		//here I catch the input value from terminal and I will chose if will be a integer of float operation
		scanf("%c",&isIntOrFloat);
		printf("%c \n",isIntOrFloat);
		// here I just start my variables int and float to store values
		
		int valxInt;
		int valyInt;
		  // here I will catch the values and store they in respective variables
		printf("DIgite o primeiro valor: \n");   
		scanf("%i",&valxInt);
		printf("Digite o segundo valor: \n");
		scanf("%i",&valyInt);
		
		calculator( valxInt, valyInt);
		
}


int calculator( int x, int y)
{
	
		  printf("a soma de %i e %i e igual a %i \n", x, y, x + y);
		  printf("a subtracao de %i e %i e igual a %i \n", x, y, x - y);
		  printf("a multiplicacao de %i e %i e igual a %i \n", x, y, x * y);
		  printf("a divisao de %i e %i e igual a %i  \n", x, y, x / y);
		  	
	
	return 0;
}
