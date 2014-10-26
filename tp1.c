	#include<stdio.h>
	#include<stdlib.h>
	#include<string.h>
	#define Max 20
	int main(){
		int i=0;
		int j=0;
		int n_planta[Max];
		int opcao=0;
	
/*	
void listar_plantas(){
	int n_planta, total_de_plantas;
	for(i=0; i<total_de_plantas; i++){
		printf("Numero de plantas: %i\n", planta[i].n_planta);
	}
	}

void introduzir_nova_planta(){
	
	char tipo_planta;
	float preco;
	int n_planta,i, total_de_plantas;
	
	printf("Introduz os dados da nova planta\n\n");
	
	printf("Numero da planta:  ");
	scanf("%i", & n_planta);
	
	// Verifica se o numero da planta inserido ja¡ esta¡ em utilizacao
	for(i=0; i<total_de_plantas; i++){
		if(n_planta == planta[i].planta){
			printf("Erro: numero ja¡ exstente.\nIntroduza novo numero:  ");
			scanf("%i",& n_planta);
			i = -1;
		}	
	}
	

	planta[total_de_plantas].preco = 0;
	planta[total_de_plantas].n_planta = 0;
	planta[total_de_plantas].tipo_planta=tipo_planta;
	
	total_de_plantas++;
	}
	
	*/


// tentativa de menu
	//char menu[] = "  1 - Introduzir nova planta\n  2 - Listar plantas\n  3 - Listar planta por codigo\n Escreve 0 para terminar o programa\n";

	do {
		printf("Menu\n");
		printf("1 - Introduzir nova planta\n");
		printf("2 - Listar plantas\n");
		printf("3 - Listar plantas por codigo\n");
		printf("0 - Para terminar o prgrama\n");
		
		scanf("%i",& opcao);		
		system("CLS");
		switch(opcao){
			case 1:
				printf("Introduzir codigo\n");
				scanf("%d", & n_planta[i]);
				for(j=0; j<=i;j++){
					if(n_planta[j] == n_planta[i]){
					
						printf("Código já existente\n");
						break;
						}
				i++;
				}	
				listar_plantas();
				break;
			case 3:
				listar_planta();
				break;
			
			default:
				break;
		}
		printf("\n\n\n pressione uma tecla para continuar..."); 
		getchar();
		system("CLS");
	} while(opcao!=0);
	
	return 0;
}
