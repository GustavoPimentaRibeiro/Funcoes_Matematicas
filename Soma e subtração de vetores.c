#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

typedef struct{
	
	float x;
	float y;
	
}Vetor;

void Soma_v(Vetor a, Vetor b, Vetor *novo){
	
	(*novo).x = a.x + b.x;
	(*novo).y = a.y + b.y;
		
}

void Subt_v1(Vetor a, Vetor b, Vetor *novo){
	
	(*novo).x = a.x + (-b.x);
	(*novo).y = a.y + (-b.y);
	
}

void Subt_v2(Vetor a, Vetor b, Vetor *novo){
	
	(*novo).x = (-a.x) + b.x;
	(*novo).y = (-a.y) + b.y;
	
}


main(){
	
	setlocale(LC_ALL, "Portuguese");
	Vetor a, b, novo;
	int aux;
	
	printf("\n Adição e subtração de vetores \n");
	printf("\n Digite o valor de x do vetor_a: ");
	scanf("%f", &a.x);
	printf("\n Digite o valor de y do vetor_a: ");
	scanf("%f", &a.y);
	printf("\n\n Digite o valor de x do vetor_b: ");
	scanf("%f", &b.x);
	printf("\n Digite o valor de y do vetor_b: ");
	scanf("%f", &b.y);
	
	printf("\n Qual opção deseja? ");
	printf("\n 1 - Somar");
	printf("\n 2 - Subtrair (a - b)");
	printf("\n 3 - Subtrair (b - a)");
	printf("\n 0 - Sair");
	printf("\n : ");
	scanf("%d", &aux);
	
	switch(aux){
		
		case 1:
			
			Soma_v(a, b, &novo);
			
			printf("\n\n Novo vetor somado: [%.3f][%.3f]", novo.x, novo.y);
			
		break;
		
		case 2:
			
			Subt_v1(a, b, &novo);
			
			printf("\n\n Novo vetor subtraido(a - b): [%.3f][%.3f]", novo.x, novo.y);
			
		break;
		
		case 3:
			
			Subt_v2(a, b, &novo);
			
			printf("\n\n Novo vetor subtraido(b - a): [%.3f][%.3f]", novo.x, novo.y);
		
		break;
		
		case 0:
			
			printf("\n");
			
		break;
		
	}
	
}
