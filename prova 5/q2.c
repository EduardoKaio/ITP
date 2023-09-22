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
    int maior_de_todos=0;
    int bomba = 0;
    scanf("%i %i %i %i", &linha, &coluna, &li_jedi, &col_jedi);
    
    int matriz[linha][coluna];
    for (int i = 1; i <= linha; i++){
        for (int j = 1; j <= coluna; j++){
            scanf("%i", &matriz[i][j]);
        }
    }
    for (int i = 1; i <= linha; i++){
        for (int j = 1; j <= coluna; j++){
            // if (matriz[i][j]>maior_de_todos) {
            // maior_de_todos=matriz[i][j];

            if (j==coluna){
                if(matriz[i][j])
            }



            if ((matriz[i][j]>matriz[i][j+1]) && (matriz[i][j]>matriz[i+1][j]) && 
            (matriz[i][j]>matriz[i-1][j]) && (matriz[i][j]>matriz[i][j-1]) && 
            (matriz[i][j]>matriz[i-1][j-1]) && (matriz[i][j]>matriz[i+1][j+1]) && 
            (matriz[i][j]>matriz[i-1][j+1]) && (matriz[i][j]>matriz[i+1][j-1])) {
                bomba = matriz[i][j];
                printf("%i linha:%i coluna:%i\n", bomba, i, j);
            }
            // }
        }
    }

    // printf("%i", maior_de_todos);

    return 0;
}