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
	
	printf("\n Digite o numero de iteracoes que deseja fazer para aproximar do numero 'e': ");
	scanf("%d", &it);
	
	for(i = 0; i < it; i ++){
		
		m = 1;
		j = fatorial(i+1, m);
		total = total + (1 / j);
		
	}
	
	printf("\n Resultado = %.10f\n", total);
	
}
