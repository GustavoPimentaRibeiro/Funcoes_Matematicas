#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main(){
	double zeta;
	int s, iter, i;
	
	printf ("\n Digite o numero de 's' para executar a funcao Zeta: ");
	scanf ("%d", &s);
	
	printf ("\n\n Digite o numero de iteracoes: ");
	scanf ("%d", &iter);
	
	zeta = 0;
	
	for (i = 1; i <= iter; i ++){
		
		zeta = zeta + ( 1 / pow(i, s) );
		
		printf ("\n\n Divisao %d - %Llf", i, zeta);
		
	}
	
	printf ("\n\n Fim do programa!!");
}
