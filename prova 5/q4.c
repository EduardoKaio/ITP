#include <stdio.h>

int calcular_aposta(int largura, int altura, int bandeira[altura][largura], char cor){


};

int main(){
    int largura;
    int numero_inicial;
    char cor;

    scanf("%i %i %c", &largura, &numero_inicial, &cor);
    int altura=(largura/3)*2;
      
    for (int i = 1; i <= altura; i++){
        
        for (int j = 1; j <= largura; j++){
            
            for (int k=numero_inicial; k<=largura/3; k++){
            
            printf("%i ", numero_inicial+1);
            }

            
        }
        printf(" aqui foi\n");
    }
    return 0;
}