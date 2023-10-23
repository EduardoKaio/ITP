#include <stdio.h>

int main(){
    int linha;
    int coluna;
    int li_jedi;
    int col_jedi;
    int contador_linha_bomba=5;
    int bombas[contador_linha_bomba][2];
    int cont=1;
    int aux_bool=0;
    int contador_locais=0;
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
                    contador_locais++;
                    printf("Local %i: %i %i\n", contador_locais,  i, j);
                    if ((i==li_jedi) && (j==col_jedi)){
                        aux_bool=1;
                    }
                }

            } 
            else if((i==1) && (j>1) && (j<coluna)){
                if ((matriz[i][j]>matriz[i][j+1]) && (matriz[i][j]>matriz[i+1][j]) && (matriz[i][j]>matriz[i][j-1]) && 
                    (matriz[i][j]>matriz[i+1][j+1]) && (matriz[i][j]>matriz[i+1][j-1])){
                    contador_locais++;

                    printf("Local %i: %i %i\n", contador_locais,  i, j);
                    if ((i==li_jedi) && (j==col_jedi)){
                        aux_bool=1;
                    }
                }

            } 
            else if((i==1) && (j==coluna)){
                
                if((matriz[i][j]>matriz[i][j-1]) && (matriz[i][j]>matriz[i+1][j-1]) && (matriz[i][j]>matriz[i+1][j])){
                    contador_locais++;
                    bombas[contador_linha_bomba][1]=i;
                    bombas[contador_linha_bomba][2]=j;
                    printf("Local %i: %i %i\n", contador_locais,  i, j);
                    if ((i==li_jedi) && (j==col_jedi)){
                        aux_bool=1;
                    }
                }
            
            } 
            else if((i>1) && (i<linha) && (j==1)){
                
                if ((matriz[i][j]>matriz[i][j+1]) && (matriz[i][j]>matriz[i+1][j]) && (matriz[i][j]>matriz[i-1][j]) && 
                    (matriz[i][j]>matriz[i+1][j+1]) && (matriz[i][j]>matriz[i-1][j+1])){
                   contador_locais++;
                    printf("Local %i: %i %i\n", contador_locais,  i, j);
                    if ((i==li_jedi) && (j==col_jedi)){
                        aux_bool=1;
                    }
                }
            
            } 
            else if((i>1) && (i<linha) && (j==coluna)){
                
                if ((matriz[i][j]>matriz[i][j-1]) && (matriz[i][j]>matriz[i+1][j]) && (matriz[i][j]>matriz[i-1][j]) && 
                    (matriz[i][j]>matriz[i-1][j-1]) && (matriz[i][j]>matriz[i+1][j-1])){
                    contador_locais++;
                    printf("Local %i: %i %i\n", contador_locais,  i, j);
                    if ((i==li_jedi) && (j==col_jedi)){
                        aux_bool=1;
                    }
                }
            } 
            else if((i==linha) && (j==1)){
                if((matriz[i][j]>matriz[i-1][j]) && (matriz[i][j]>matriz[i][j+1]) && (matriz[i][j]>matriz[i-1][j+1])){
                    
                   contador_locais++;
                    printf("Local %i: %i %i\n", contador_locais,  i, j);
                    if ((i==li_jedi) && (j==col_jedi)){
                        aux_bool=1;
                    }
                }
            } 
            else if((i==linha) && (j>1) && (j<coluna)){
                
                if((matriz[i][j]>matriz[i-1][j]) && (matriz[i][j]>matriz[i][j+1]) && (matriz[i][j]>matriz[i-1][j+1])
                && (matriz[i][j]>matriz[i][j-1]) && (matriz[i][j]>matriz[i-1][j-1])){
                    contador_locais++;
                    printf("Local %i: %i %i\n", contador_locais,  i, j);
                    if ((i==li_jedi) && (j==col_jedi)){
                        aux_bool=1;
                    }
                }

            } 
            else if((i==linha) && (j==coluna)){
               
                if((matriz[i][j]>matriz[i-1][j]) && (matriz[i][j]>matriz[i][j-1]) && (matriz[i][j]>matriz[i-1][j-1])){
                    contador_locais++;
                    printf("Local %i: %i %i\n", contador_locais,  i, j);
                    if ((i==li_jedi) && (j==col_jedi)){
                        aux_bool=1;
                    }
                }
            } 
            else {
                if ((matriz[i][j]>matriz[i][j+1]) && (matriz[i][j]>matriz[i+1][j]) && (matriz[i][j]>matriz[i-1][j]) 
                && (matriz[i][j]>matriz[i][j-1]) && (matriz[i][j]>matriz[i-1][j-1]) && (matriz[i][j]>matriz[i+1][j+1]) 
                && (matriz[i][j]>matriz[i-1][j+1]) && (matriz[i][j]>matriz[i+1][j-1])) {
                    contador_locais++;
                    printf("Local %i: %i %i\n", contador_locais,  i, j);
                    if ((i==li_jedi) && (j==col_jedi)){
                        aux_bool=1;
                    }
                }
            }

        }

    }
    if (aux_bool==1){
        printf("Descanse na Força...");
    } else {
        printf("Ao resgate!");
    }

    return 0;
}