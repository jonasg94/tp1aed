#include <stdio.h>
#include <stdlib.h>
#define Max 20


int introduzir_nova_planta(int j){
    int codigo_planta[Max],num_plantas_stock[Max],i=0;
    char tipo_planta[Max];
    float preco_planta[Max];
    int variavel_auxiliar;
    printf ("Introduza o codigo da planta\n");
    scanf("%i", & variavel_auxiliar);
    for(i=0; i<=j;i++){
        if (j!=0){
            while (variavel_auxiliar == codigo_planta [i]){
                printf("Codigo Repetido\nIntroduza novo codigo\n");
                scanf("%i", &variavel_auxiliar);
                i=0;
            }
        }
    }
        codigo_planta[j]=variavel_auxiliar;
    	printf("Introduza o tipo de planta\n I para interior\n E para exterior\n e m para misto\n ");
    	scanf("%s", & tipo_planta[j]);
    	printf("Introduza o preco da planta\n");
    	scanf ("%f",& preco_planta[j]);
        printf("Introduza o numero de plantas em stock");
        scanf("%d", & num_plantas_stock[j]);
        
    j++;
    return j;
//    return codigo_planta[j];
//    return num_plantas_stock[j];
//    return tipo_planta[j];
//    return preco_planta[j];
    
}
void listar_planta(int j){
    int codigo_planta[Max], i, num_plantas_stock[Max];
    char tipo_planta[Max];
    float preco_planta[Max];
    
    for (i=0; i<j; i++) {
        printf("%i\t %i\t %c\t %f\n",codigo_planta[i],num_plantas_stock[i],tipo_planta[i],preco_planta[i]);
    }
}
int media_peco(int j){
    float preco_planta[j], aux=0, media=0;
    int i=0;
    for (i=0; i<j; i++) {
        aux= preco_planta[i] + aux;
        
    }
    media = aux/j;
    return media;
    
}
void listar_uma_planta(int j){
    int codigo_planta[j], i, num_plantas_stock[j];
    char tipo_planta[j];
    float preco_planta[j];
    int aux = 0;
    printf("Introduza o codigo da planta");
    scanf("%i", &aux);
    
    for (i=0; i<0; i++) {
        if(aux != codigo_planta[i]);
        else aux = i;
    }
    printf("%d\t %d\t %c\t %f\n", codigo_planta[i], num_plantas_stock[i], tipo_planta[i],preco_planta[i]);
    
}
void listar_tipo_planta(int j){
    int codigo_planta[j], i=0, num_plantas_stock[j];
    char tipo_planta[j];
    float preco_planta[j];
    char aux;
    printf("Introduza o tipo de planta\n");
    scanf("%c", & aux);
    while (i<j) {
        if(aux == tipo_planta[i]){
            printf("todas as plantas do tipo\n", tipo_planta[i]);
            printf("%d\n %d\n %f\n", codigo_planta[i], codigo_planta[i], preco_planta[i]);
            i++;
        }
        else
            i++;
        }
}
void listar_planta_abaixo_media(int j){
    int codigo_planta[j], i=0,count=0, num_plantas_stock[j];
    char tipo_planta[i];
    float preco_planta[i];
    for (i=0; i<j; i++) {
        count = num_plantas_stock[i] + count;
    }
    count = count/j;
    
    while (i<j) {
        if (count > num_plantas_stock[i]) {
            printf("Plantas abaixo da media\n");
            printf("%d\n",codigo_planta[i]);
            i++;
        }
        else
            i++;
        
    }
    
    
}

int main(){
   
    int j=0, opcao;
    scanf("%d", &opcao);
    do{
        switch (opcao) {
            case 1:
                if (j<Max)
                    j = introduzir_nova_planta(j);
                break;
            case 2:
                
                break;
            case 3:
                break;
            case 4:
                break;
            case 5:
                break;
            case 6:
                break;
            case 7:
                break;
            case 8:
                break;
            case 9:
                break;
            case 10:
                break;
            case 11:
                break;
            case 12:
                break;
            default:
                break;
        }
    
    }while (opcao!=0);
    
    
   
    
}