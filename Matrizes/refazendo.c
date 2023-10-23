#include <stdio.h>

int main(){

    int largura;
    int numero_inicial;
    int aux_ni;
    char cor;

    scanf("%i %i %c", &largura, &numero_inicial, &cor);

    aux_ni=numero_inicial+1;
    int altura=(largura/3)*2;
    int divisor=largura/3;
    int acumulador=0;
    int verde[altura][largura/3];
    int vermelho[altura][largura/3];
    int amarelo[altura][largura/3];
    
    if(cor=='G'){
        for (int i = 1; i <= altura; i++){
            
            for (int j = 1; j <= largura/3; j++){
                verde[i][j]=aux_ni;
                acumulador=acumulador+aux_ni;
            }   
        }
    }
    if(cor=='Y'){
        aux_ni++;

        for (int i = 1; i <= altura; i++){
            
            for (int j = 1; j <= largura/3; j++){
                amarelo[i][j]=aux_ni;
                acumulador=acumulador+aux_ni;
            }
        }    
    }

    if(cor=='R'){
        aux_ni=aux_ni+2;

        for (int i = 1; i <= altura; i++){
            
            for (int j = 1; j <= largura/3; j++){
                vermelho[i][j]=aux_ni;
                acumulador=acumulador+aux_ni;
            }
        }    
    }
    printf("%i", acumulador);
    return 0;
}