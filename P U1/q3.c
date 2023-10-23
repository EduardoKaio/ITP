#include <stdio.h>



int main(){
    int repetido=0;
    int tamanho;
    int auxiliar;
    scanf("%i", &tamanho);

    int vetor[tamanho];

    for(int i=0; i<tamanho; i++){
        scanf("%i", &vetor[i]);
    }

    // Tirar repetição
    for (int i = 0; i < tamanho; i++){
        
        for (int j = (i+1); j < tamanho; j++){
            
            if(vetor[j] < vetor[i]){
                
                auxiliar = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = auxiliar;
            }
        }
    }
    // ordenar crescente
    for (int i = 0; i < tamanho; i++) {
        repetido = 0;
        for (int j = 0; j < i; j++) {
            if (vetor[i] == vetor[j]) {
                repetido = 1; 
                break;
            }
        }
        
        if (repetido==0) { 
            printf("%i ", vetor[i]);
        }
    }
    
    return 0;
}