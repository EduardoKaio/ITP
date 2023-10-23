#include <stdio.h>
#include <math.h>

int main(){

    int linha;
    int coluna;
    int sobrevivencia;
    int acumulador=0;
    int cont_linha=1;
    int cont_coluna=1;
    int aux_coluna;
    int aux_linha;
    int menor_diferenca=321321312;
    int cont_geral=0;
    int i_aux;
    int j_aux;

    scanf("%i %i %i", &linha, &coluna, &sobrevivencia);
    aux_coluna=coluna;
    aux_linha=linha;

    int matriz[linha][coluna];
    
    for (int i = 1; i <= linha; i++){
        for (int j = 1; j <= coluna; j++){
            scanf("%i", &matriz[i][j]);
        }
    }

    while(aux_linha>=3){
       
        while (aux_coluna>=3){
            
            for (int i = cont_linha; i <= cont_linha+2; i++){
                for (int j = cont_coluna; j <= cont_coluna+2; j++){
                    acumulador=acumulador+matriz[i][j];

                }
            }
           
            if (abs(acumulador-sobrevivencia)<=menor_diferenca){
                menor_diferenca=abs(acumulador-sobrevivencia);
            }    

            aux_coluna--;
            cont_coluna++;
            acumulador=0;
            cont_geral++;
        }

        cont_coluna=1;
        aux_linha--;
        aux_coluna=coluna;
        cont_linha++;
    }
    cont_linha=1;
    cont_coluna=1;
    aux_linha=linha;
    aux_coluna=coluna;

    while(aux_linha>=3){
       
        while (aux_coluna>=3){
            
            for (int i = cont_linha; i <= cont_linha+2; i++){
                for (int j = cont_coluna; j <= cont_coluna+2; j++){
                    acumulador=acumulador+matriz[i][j];

                }
            }
           
            if (abs(acumulador-sobrevivencia)==menor_diferenca){
                i_aux=cont_linha;
                j_aux=cont_coluna;            
            }

            aux_coluna--;
            cont_coluna++;
            acumulador=0;
            cont_geral++;
        }

        cont_coluna=1;
        aux_linha--;
        aux_coluna=coluna;
        cont_linha++;
    }

    printf("A melhor area para exploracao eh %i %i com valor %i", i_aux, j_aux, menor_diferenca);
    
    return 0;
}