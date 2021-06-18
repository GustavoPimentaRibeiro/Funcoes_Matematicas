#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

// Função para zerar conteúdo dos ponteiros
void Zera_conteudo(float *vet[]){
	
	int i;

	for(i = 0; i < 3; i ++){
		
		*vet[i] = 0;
		
	}
	
}

main(){
	
	setlocale(LC_ALL, "portuguese");
	
	float vet[3];
	int u, v;
	
	printf("\n Descreva um par de números inteiro separados por espaço: ");
	scanf("%d %d", &u, &v);
	
	vet[0] = pow(u, 2) - pow(v, 2);
	vet[1] = 2 * u * v;
	vet[2] = pow(u, 2) + pow(v, 2);
	
	// Formato do print = [u²-v², 2uv, u²+v²]
	printf("\n\n Resultados do Trio Pitagórico: [%.3f, %.3f, %.3f]", vet[0], vet[1], vet[2]);
	
}
