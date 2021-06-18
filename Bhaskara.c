#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

void Bhaskara(float a, float b, float c, float delta){
	
	float x1, x2;
	
	x1 = (-b + sqrt(delta)) / (2 * a);
	x2 = (-b - sqrt(delta)) / (2 * a);
	
	printf("\n\n Resultado de x1: %.5f \n Resultado de x2: %.5f", x1, x2);
	
}

int Delta(float a, float b, float c){
	
	float delta;
	
	delta = pow(b, 2) - (4 * a * c);
	
	printf("\n\n Resultado de Delta: %.5f", delta);
	
	if(delta <= 0){
		
		return -1;
		
	}else{
		
		printf("\n\n É possível calcular Bhaskara!!");
		Bhaskara(a, b, c, delta);
		
	}
	
}

main(){
	
	setlocale(LC_ALL, "Portuguese");
	float a, b, c, aux;
	
	printf("\n Fórmula completa: ax² + bx + c\n");
	
	printf("\n Digite o valor de 'a': ");
	scanf("%f", &a);
	printf("\n Digite o valor de 'b': ");
	scanf("%f", &b);
	printf("\n Digite o valor de 'c': ");
	scanf("%f", &c);
	
	aux = Delta(a, b, c);
	
	if(aux == -1){
		
		printf("\n\n Não existe raiz quadrada de 0 ou de números negativos!! \n");
		
	}
	
}
