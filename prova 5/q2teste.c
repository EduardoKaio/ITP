// ler tamanho da matriz
// ler cordenadas do jedi 
// ler a matriz
// verificar quais sao os locais da bomba
// verificar se o local bate co a loc do jedi
#include <stdio.h>

int main(){
    int linha;
    int coluna;
    int li_jedi;
    int col_jedi;
    int contador_linha_bomba=0;
    int bombas[contador_linha_bomba][2];
    int cont=1;
    scanf("%i %i %i %i", &linha, &coluna, &li_jedi, &col_jedi);
    
    int matriz[linha][coluna];
    for (int i = 1; i <= linha; i++){
        for (int j = 1; j <= coluna; j++){
            scanf("%i", &matriz[i][j]);
        }
    }
    
    for (int i = 1; i <= linha; i++){
        for (int j = 1; j <= coluna; j++){

            if((i==1) && (j==1)){
               
                if((matriz[i][j]>matriz[i][j+1]) && (matriz[i][j]>matriz[i+1][j+1]) && (matriz[i][j]>matriz[i+1][j])){
                    contador_linha_bomba++;
                    bombas[contador_linha_bomba][1]=i;
                    bombas[contador_linha_bomba][2]=j;
                    printf("Bomba: %i %i", bombas[contador_linha_bomba][1], bombas[contador_linha_bomba][2]);
                }

            } else if((i==1) && (j>1) && (j<coluna)){
                
                if ((matriz[i][j]>matriz[i][j+1]) && (matriz[i][j]>matriz[i+1][j]) && (matriz[i][j]>matriz[i][j-1]) && 
                    (matriz[i][j]>matriz[i+1][j+1]) && (matriz[i][j]>matriz[i+1][j-1])){
                    contador_linha_bomba++;
                    bombas[contador_linha_bomba][1]=i;
                    bombas[contador_linha_bomba][2]=j;
                    printf("Bomba: %i %i", bombas[contador_linha_bomba][1], bombas[contador_linha_bomba][2]);
                }

            } 
            else if((i==1) && (j==coluna)){
                
                if((matriz[i][j]>matriz[i][j-1]) && (matriz[i][j]>matriz[i+1][j-1]) && (matriz[i][j]>matriz[i+1][j])){
                    contador_linha_bomba++;
                    bombas[contador_linha_bomba][1]=i;
                    bombas[contador_linha_bomba][2]=j;
                    printf("Bomba: %i %i", bombas[contador_linha_bomba][1], bombas[contador_linha_bomba][2]);
                }
            
            } else if((i>1) && (i<linha) && (j==1)){
                
                if ((matriz[i][j]>matriz[i][j+1]) && (matriz[i][j]>matriz[i+1][j]) && (matriz[i][j]>matriz[i-1][j]) && 
                    (matriz[i][j]>matriz[i+1][j+1]) && (matriz[i][j]>matriz[i-1][j+1])){
                    contador_linha_bomba++;
                    bombas[contador_linha_bomba][1]=i;
                    bombas[contador_linha_bomba][2]=j;
                    printf("Bomba: %i %i", bombas[contador_linha_bomba][1], bombas[contador_linha_bomba][2]);
                }
            
            } 
            else if((i>1) && (i<linha) && (j==coluna)){
                
                if ((matriz[i][j]>matriz[i][j-1]) && (matriz[i][j]>matriz[i+1][j]) && (matriz[i][j]>matriz[i-1][j]) && 
                    (matriz[i][j]>matriz[i-1][j-1]) && (matriz[i][j]>matriz[i+1][j-1])){
                    contador_linha_bomba++;
                    bombas[contador_linha_bomba][1]=i;
                    bombas[contador_linha_bomba][2]=j;
                    printf("Bomba: %i %i", bombas[contador_linha_bomba][1], bombas[contador_linha_bomba][2]);
                }
            } 
            else if((i==linha) && (j==1)){
                
                if((matriz[i][j]>matriz[i-1][j]) && (matriz[i][j]>matriz[i][j+1]) && (matriz[i][j]>matriz[i+1][j+1])){
                    contador_linha_bomba++;
                    bombas[contador_linha_bomba][1]=i;
                    bombas[contador_linha_bomba][2]=j;
                    printf("Bomba: %i %i", bombas[contador_linha_bomba][1], bombas[contador_linha_bomba][2]);
                }
            } 
            else if((i==linha) && (j>1) && (j<coluna)){
                
                if((matriz[i][j]>matriz[i-1][j]) && (matriz[i][j]>matriz[i][j+1]) && (matriz[i][j]>matriz[i-1][j+1])
                && (matriz[i][j]>matriz[i][j-1]) && (matriz[i][j]>matriz[i-1][j-1])){
                    contador_linha_bomba++;
                    bombas[contador_linha_bomba][1]=i;
                    bombas[contador_linha_bomba][2]=j;
                    printf("Bomba: %i %i", bombas[contador_linha_bomba][1], bombas[contador_linha_bomba][2]);
                }

            } 
            else if((i==linha) && (j==coluna)){
            
                if((matriz[i][j]>matriz[i-1][j]) && (matriz[i][j]>matriz[i][j-1]) && (matriz[i][j]>matriz[i-1][j-1])){
                    contador_linha_bomba++;
                    bombas[contador_linha_bomba][1]=i;
                    bombas[contador_linha_bomba][2]=j;
                    printf("Bomba: %i %i", bombas[contador_linha_bomba][1], bombas[contador_linha_bomba][2]);
                }
            } 
            else {
                if ((matriz[i][j]>matriz[i][j+1]) && (matriz[i][j]>matriz[i+1][j]) && (matriz[i][j]>matriz[i-1][j]) 
                && (matriz[i][j]>matriz[i][j-1]) && (matriz[i][j]>matriz[i-1][j-1]) && (matriz[i][j]>matriz[i+1][j+1]) 
                && (matriz[i][j]>matriz[i-1][j+1]) && (matriz[i][j]>matriz[i+1][j-1])) {
                    contador_linha_bomba++;
                    bombas[contador_linha_bomba][1]=i;
                    bombas[contador_linha_bomba][2]=j;
                    printf("Bomba: %i %i", bombas[contador_linha_bomba][1], bombas[contador_linha_bomba][2]);
                }
            }

        }
    }
    // for (int i = 1; i <= 5; i++){
    //     for (int j = 1; j <= 2; j++) {
    //         printf("%i ", bombas[i][j]);
    //     }
    //     printf("\n");
    // }
    


    return 0;
}