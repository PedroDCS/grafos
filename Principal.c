/*
* Pedro Daniel Camargos Soares
* 0020640
*
*
*
*
*/
#include "grafo.c"

int main(){
		
	int N;
	printf("Digite a quantidade de vertices do grafo:\n");
	scanf ("%d",&N); // Recebe o tamanho da matriz
	system("cls");
	
	int **Gra;
	Gra = Cria_Grafo(N);
	
	int op = 1, x,y;
	

	int opc = 0;
	
	do{
		printf("------------------------\n");
		printf("--------- MENU ---------\n");
		printf("------------------------\n");
		printf("- 1 - Inserir Aresta   -\n");
		printf("- 2 - Remover Aresta   -\n");
		printf("- 3 - Pesquisar Aresta -\n");
		printf("- 4 - Imprimir Grafo   -\n");
		printf("- 0 - Sair             -\n");
		printf("------------------------\n");
		scanf("%d", &opc);
			switch(opc){
				case 1:
					printf("Digite a linha que deseja inserir:\n");
					scanf ("%d",&x);
					printf("Digite a coluna que deseja inserir:\n");
					scanf ("%d",&y);
					system("cls");	
					Insere_Arestas(Gra,x,y);
					
					do{
						printf("Deseja inserir outro elemento no grafo?\n");
						printf(" 1 - Sim\n");
						printf(" 0 - Nao\n");
						scanf ("%d",&op);
						system("cls");
							
						if(op == 1){
							printf("Digite a linha que deseja inserir:\n");
							scanf ("%d",&x);
							printf("Digite a coluna que deseja inserir:\n");
							scanf ("%d",&y);
							system("cls");	
							Insere_Arestas(Gra,x,y);		
						}
							
					} while(op!=0);
				break;
				
				case 2:
					printf("Digite a linha que deseja Excluir:\n");
					scanf ("%d",&x);
					printf("Digite a coluna que deseja Excluir:\n");
					scanf ("%d",&y);
					system("cls");	
					Remove_Arestas(Gra,x,y);
					
					do{
						printf("Deseja Excluir outro elemento no grafo?\n");
						printf(" 1 - Sim\n");
						printf(" 0 - Nao\n");
						scanf ("%d",&op);
						system("cls");
							
						if(op == 1){
							printf("Digite a linha que deseja Excluir:\n");
							scanf ("%d",&x);
							printf("Digite a coluna que deseja Excluir:\n");
							scanf ("%d",&y);
							system("cls");	
							Remove_Arestas(Gra,x,y);		
						}
							
					} while(op!=0);
	
				break;
				
				//Pesquisa_Aresta(int **Gra, int i, int j)
				case 3:
					printf("Digite a linha que deseja Pesquisar:\n");
					scanf ("%d",&x);
					printf("Digite a coluna que deseja Pesquisar:\n");
					scanf ("%d",&y);
					system("cls");	
					Pesquisa_Aresta(Gra,x,y);
					
					do{
						printf("Deseja Pesquisar outro elemento no grafo?\n");
						printf(" 1 - Sim\n");
						printf(" 0 - Nao\n");
						scanf ("%d",&op);
						system("cls");
							
						if(op == 1){
							printf("Digite a linha que deseja Pesquisar:\n");
							scanf ("%d",&x);
							printf("Digite a coluna que deseja Pesquisar:\n");
							scanf ("%d",&y);
							system("cls");	
							Pesquisa_Aresta(Gra,x,y);		
						}
							
					} while(op!=0);
	
				break;
				
				case 4:
					Imprime_Grafo(Gra,N);
				break;
				
				case 0:
					return 0;
				break;		
			}
		
	}while(opc != 0);
	
	

	
	//Pesquisa_Aresta(Gra,1,2);
	//Pesquisa_Aresta(Gra,2,4);
	
	/*
	Insere_Arestas(Gra,1,2);
	Insere_Arestas(Gra,2,3);
	Insere_Arestas(Gra,3,4);
	Insere_Arestas(Gra,3,3);
	*/
	
	Imprime_Grafo(Gra,N);
	

	
	return 0;
}



