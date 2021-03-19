//Arquivo .c

#include <stdio.h>
#include <stdlib.h>
#include "grafo.h"

int **Cria_Grafo(int N){
	int **Gra;	
	Gra = (int **) malloc(N*sizeof(int *)); //Define as Linhas
		
	int i,j;
	for(i = 0; i < N; i++){
		
		Gra[i] = (int *) malloc(N * sizeof(int)); //Define as colunas
		for(j = 0; j< N; j++){
			Gra[i][j] = 0; //Define que ainda nao há nenhuma ligacao entre os vertices	
		}
	}
	return Gra;
}

int **Insere_Arestas(int **Gra, int i, int j){ //Recebe a posicao de insercao por parametro
	//Define com 1, quando ha ligacao
	Gra[i-1][j-1] = 1; // subtrai 1 para inserir na posicao certa
	Gra[j-1][i-1] = 1;
	return Gra;
}

int **Remove_Arestas(int **Gra, int i, int j){ //Recebe a posicao de remocao por parametro
	//Considerando que nao ha verificacao de se ja existia uma aresta anteriormente
	//Define como 0, para remover a ligacao
	Gra[i-1][j-1] = 0;
	Gra[j-1][i-1] = 0;
	return Gra;
}

int **Imprime_Grafo(int **Gra, int N){
	int i, j;
	for(i=0; i<N; i++){ //Varre a matriz de adjacensia
		for(j=0; j<N; j++){
			if(Gra[i][j] == 1){
				if(i>=j){
					printf("|%d,%d|\n",i+1,j+1); //Mostra os vertices que possui relacao
				}
			}			
		}
	}
	return;
}

int Pesquisa_Aresta(int **Gra, int i, int j){
	
	if((Gra[i-1][j-1] == 1) && (Gra[j-1][i-1]) == 1){ //Verifica se ha relacao
		printf("Ha relacao!\n");
		return 1;
	} else {
		printf("Nao ha relacao!\n");
		return 0;	
	}	
}

