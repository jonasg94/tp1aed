#include <stdio.h>
#include <stdlib.h>
#define Max 20

int introduzir_nova_planta(int j){
    int codigo_planta[Max],num_plant_stock[Max],i=0;
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
    
    /*printf("Introduza o tipo de planta\n I para interior\n E para exterior\n e m para misto\n ");
    scanf("%c",& tipo_planta[j]);
    printf("Introduza o preco da planta\n");
    scanf ("%f",& preco_planta[j]);*/
    
    
    j++;
    return j;
}

int main(){
    int i;
    int j=0;
    for (i=0; i<Max; i++)
        j = introduzir_nova_planta(j);
}
