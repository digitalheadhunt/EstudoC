/*
 * This is my study about recursion in c, here i will make a kind of for loop just using recursion,
 * why I will do this? I dont know I`m crazy.
 */
 
 #include <stdio.h>
 
 
 int valorX;
 
 int main(void)
 {
		// here I will catch some value to iterate a long of program
		printf("Digite um numero: \n");
		scanf("%i",&valorX);
		// here I make a reference for my Function
		int count(int x);
		
		// the function call`s passing the value of valorX as a parameter
		count(valorX);
}

// here I did two variables just to catch the index value to put values on my array
int index = 0;

// and here I start a new array with 50 positions why 50 I dont know, maybe I can change it after.

char string[50];

int count(int x)
{
	// here is the most amazing part of this program to me
		if(x > 0){
			/*
			 * well here I just make something like this
			 * Im waiting x will be ever a number greater than 0,
			 * well when x for greater than 0, I will:
			 * first -> put a * on a index of my vetor;
			 * second-> I will increase the index value to +1;
			 * third-> I will print this on my terminal;
			 * four-> I will decrease the x value to -1;
			 * fifty-> I will call the function again passing the new value of X;
			 * 
			 * is just this.
			 * */
			string[index] = "*";
			index += 1;
			printf("%s \n", string);
			x = x - 1;
			count(x);
		} else {
			printf("Finish \n");
			return 0;
		}
}
