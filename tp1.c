	#include<stdio.h>
	#include<stdlib.h>
	#include<string.h>
	
	int main(){
		int i, n_planta,opcao;
		int total_de_plantas=0;
		float preco;
		char tipo_planta; 
		
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
	
	printf("Número da planta:  ");
	scanf("%i", & n_planta);
	
	// Verifica se o número da planta inserido já está em utilização
	for(i=0; i<total_de_plantas; i++){
		if(n_planta == planta[i].planta){
			printf("Erro: número já exstente.\nIntroduza novo número:  ");
			scanf("%i",& n_planta);
			i = -1;
		}	
	}
	

	planta[total_de_plantas].preco = 0;
	planta[total_de_plantas].n_planta = 0;
	planta[total_de_plantas].tipo_planta=tipo_planta;
	
	total_de_plantas++;
	}
	}
	




// tentativa de menu
	char menu[] = "  1 - Introduzir nova planta\n  2 - Listar plantas\n  3 - Listar planta por codigo\n Escreve 0 para terminar o programa\n";

	do {
		printf(menu);
		scanf("%i",& opcao);
		
		system("CLS");
		switch(opcao){
			case 1:
				introduzir_nova_planta();
				break;
			case 2:
				listar_plantas();
				break;
			case 3:
				listar_planta();
				break;
			
			default:
				break;
		}
		printf("\n\n\npressione uma tecla para continuar..."); 
		getch();
		system("CLS");
	} while(opcao!=0);
	
	return 0;
