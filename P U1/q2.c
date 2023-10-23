#include <stdio.h>

void flatten(int l, int c, int m[l][c], int vetor[l*c], int ordem){
    int cont=0;
    
    if(ordem==0){


        for (int i = 0; i < l; i++){  
            for (int j = 0; j < c; j++){

                vetor[cont]=m[i][j];
                cont++;
            }
        }
                 
       

    } else {
        
        for (int i = 0; i < c; i++){  
            
            for (int j = 0; j < l; j++){
                
                vetor[cont]=m[j][i];
                cont++;
            }

        }

    }
    
    for (int i = 0; i < l*c; i++) {
        printf("%i ", vetor[i]);
    }
    
}

int main(){
    int ordem;
    int l;
    int c;

    scanf("%i %i %i", &ordem, &l, &c);
    int m[l][c];
    int vetor[l*c];
    for (int i = 0; i < l; i++){
        for (int j = 0; j < c; j++){
            scanf("%i", &m[i][j]);
        }
    }

    flatten(l, c, m, vetor, ordem);

    return 0;
}