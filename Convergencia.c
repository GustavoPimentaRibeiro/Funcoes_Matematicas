#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main(){
	
	double convergencia;
	unsigned long long int iteracoes, i, x;
	
	convergencia = 0;
	x = 0;
	
	printf ("\n Formula original ---\t  1 + (1/2) + (1/4) + (1/8) ...");
	printf ("\n\n Digite o numero de iteracoes que deseja fazer: ");
	scanf ("%llu", &iteracoes);
	
	for (i = 0; i < iteracoes; i ++){
		
		convergencia = convergencia + (1 / pow(2, i));
		printf("\n\n Convergencia %llu = %.15lf     i = %llu", x+1, convergencia, i+1);
		x++;
		
	}
	
	printf ("\n\n FIM DO PROGRAMA");
}
