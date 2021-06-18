#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Gera a matriz de forma sequencial, começando por 1
void Gera_matriz(int n, int matriz[n][n]){
	
	int i, j, cont = 1;
	
	for(i = 0; i < n; i ++){
		
		for (j = 0; j < n; j ++){
			
			matriz[i][j] = cont;
			cont ++;
			
		}
		
	}
}

// Mostra a matriz na tela
void Printa_matriz(int n, int matriz[n][n]){
	
	int i, j;
	
	printf("\n");
	for(i = 0; i < n; i ++){
		
		printf("\n");
		
		for (j = 0; j < n; j ++){
			
			printf("%d ", matriz[i][j]);
			
		}
		
	}
	
}

// Rotaciona a matriz 90°
void Rotaciona_90(int n, int matriz[n][n]){
	
	int i, j, aux;
	
	for(i = 0; i < n / 2; i ++){
		
		for (j = 0; j < n - i - 1; j ++){
			
			aux = matriz[i][j];
			matriz[i][j] = matriz[n - 1 - j][i];
			matriz[n - 1 - j][i] = matriz[n - 1 - i][n - 1 - j];
			matriz[n - 1 - i][n - 1 - j] = matriz[j][n - 1 - i];
			matriz[j][n - 1 - i] = aux;
			
		}
		
	}
	
}

// Rotaciona a matriz 180°
void Rotaciona_180(int n, int matriz[n][n]){
	
	Rotaciona_90(n, matriz);
	Rotaciona_90(n, matriz);
	
}

// Rotaciona a matriz 270°
void Rotaciona_270(int n, int matriz[n][n]){
	
	Rotaciona_90(n, matriz);
	Rotaciona_90(n, matriz);
	Rotaciona_90(n, matriz);
	
}

main(){
	
	int n;
	
	printf("\n Digite o tamanho da matriz quadrada: ");
	scanf("%d", &n);
	
	int matriz[n][n];
	
	Gera_matriz(n, matriz);
	Printa_matriz(n, matriz);
	
	Rotaciona_90(n, matriz);
	Printa_matriz(n, matriz);
	
}
