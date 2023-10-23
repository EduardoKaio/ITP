#include <stdio.h>

int main(){

    int ordem;
    int acumulador=0;

    scanf("%i", &ordem);
    int matriz[ordem][ordem];
    
    for (int i = 0; i < ordem; i++){
        for (int j = 0; j < ordem; j++){
            scanf("%i", &matriz[i][j]);
        }
    }
    for (int i = 0; i < ordem; i++){
        for (int j = 0; j < ordem; j++){
            if (j==i){
                acumulador=acumulador+matriz[i][j];
            }
        }
    }
    printf("%i", acumulador);

    return 0;
}