#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
	Fun��o que retorna o n�mero divido por 2 caso ele seja par e retorna o n�mero multiplicado por 3 e somado 1 caso seja �mpar,
	at� que seja convergido ao n�mero 1.
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
	
	int number = 21, steps = 0;     // number - n�mero inicial para a sequ�ncia   ||   steps - n�mero de passos que levou para a converg�ncia
	
	printf("\n\n");
	
	while(number != 1){
		
		printf(" %d", number = collatz(number, &steps));
		
	}
	
	printf("\n\n N�mero de passos: %d\n\n", steps);
	
}
