#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

void Compr_vet(float x, float y, float *hipo){
	
	(*hipo) = sqrt( pow(x, 2) + pow(y, 2) );
	
}


main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	float x, y, hipo;
	
	printf("\n F�rmula de Pit�goras:  c = Raiz(a� + b�) \n");
	printf("\n Digite o valor de a: ");
	scanf("%f", &x);
	printf("\n Digite o valor de b: ");
	scanf("%f", &y);
	
	Compr_vet(x, y, &hipo);
	
	if(hipo <= 0){
		
		printf("\n\n N�o � poss�vel calcular raiz quadrada de 0 ou n�meros negativos!! \n");
		
	}else{
		
		printf("\n\n Comprimento do vetor: %f", hipo);
		
	}
	
	
	
}
