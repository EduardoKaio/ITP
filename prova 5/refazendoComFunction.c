#include <stdio.h>

int CalcularAposta(int altura, int largura, int bandeira[altura][largura], char cor, int numero_inicial){
    int acumulador=0;

    switch (cor) {
    case 'G':
        for (int i = 1; i <= altura; i++){
            for (int j = 1; j <= largura; j++){
                bandeira[i][j]=numero_inicial;
                acumulador=acumulador+numero_inicial;
            }   
        }
        break;

    case 'Y':
        numero_inicial=numero_inicial+1;
        for (int i = 1; i <= altura; i++){
            for (int j = 1; j <= largura; j++){
                bandeira[i][j]=numero_inicial;
                acumulador=acumulador+numero_inicial;
            }
        }
        break;
    
    case 'R':
        numero_inicial=numero_inicial+2;

        for (int i = 1; i <= altura; i++){
            
            for (int j = 1; j <= largura; j++){
                bandeira[i][j]=numero_inicial;
                acumulador=acumulador+numero_inicial;
            }
        }
        break; 
    
    default:
        break;
    }
    return acumulador;
}

int main(){

    int largura_inicial;
    int numero_inicial;
    int aux_ni;
    char cor;

    scanf("%i %i %c", &largura_inicial, &numero_inicial, &cor);

    aux_ni=numero_inicial+1;
    int altura=(largura_inicial/3)*2;
    int largura=largura_inicial/3;
    int bandeira[altura][largura];
    int acumulador = CalcularAposta(altura, largura, bandeira, cor, aux_ni);

    printf("%i", acumulador);
    return 0;
}