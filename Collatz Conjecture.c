#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
	Função que retorna o número divido por 2 caso ele seja par e retorna o número multiplicado por 3 e somado 1 caso seja ímpar,
	até que seja convergido ao número 1.
*/
int collatz(int number, int *steps){
	
	if(number % 2 == 0){
		
		*steps = *steps + 1;
		return number = number / 2;
		
	}else{
		
		*steps = *steps + 1;
		return number = 3 * number + 1;
		
	}
	
}

main(){
	
	setlocale(LC_ALL, "portuguese");
	
	int number = 21, steps = 0;     // number - número inicial para a sequência   ||   steps - número de passos que levou para a convergência
	
	printf("\n\n");
	
	while(number != 1){
		
		printf(" %d", number = collatz(number, &steps));
		
	}
	
	printf("\n\n Número de passos: %d\n\n", steps);
	
}
