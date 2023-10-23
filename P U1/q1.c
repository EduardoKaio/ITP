#include <stdio.h>
#include <math.h>

int somaLinhaMatrizMeio(int m, int n, int matriz[m][n]){
    
    int linha_central=ceil(m/2)+1;
    int coluna_central=ceil(n/2)+1;
    int acumulador=0;


    for (int i = 1; i <= m; i++){
        for (int j = 1; j <= n; j++){
            
            if(i==linha_central){
                acumulador=acumulador+matriz[i][j];
            }
            if(j==coluna_central){
                acumulador=acumulador+matriz[i][j];
            }
        
        }
    }
    return acumulador;

}


int main(){
    int m;
    int n;

    scanf("%i %i", &m, &n);
    int matriz[m][n];

    for (int i = 1; i <= m; i++){
        for (int j = 1; j <= n; j++){
            scanf("%i", &matriz[i][j]);
        }
    }
    
    int resultado=somaLinhaMatrizMeio(m, n, matriz);
    printf("%i", resultado);


    return 0;
}