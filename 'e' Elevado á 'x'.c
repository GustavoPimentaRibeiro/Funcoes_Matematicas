#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int fatorial(int i, double m){
	int x = 1;
	
	while(x <= i){
		
		m = m * x;
		x ++;
		
	}
	
	return m;
}

main(){
	
	double total = 1, m, j;
	int it, i;
	
	printf("\n Digite o numero de iteracoes que deseja fazer para a funcao ('e' elevado ah x): ");
	scanf("%d", &it);
	
	for(i = 1; i <= it; i ++){
		
		m = 1;
		j = fatorial(i, m);
		total = total + (pow(it, i) / j);
		
	}
	
	printf("\n Resultado = %.10f\n", total);
	
}
