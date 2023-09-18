#include <stdio.h>
#include <math.h>

int retornaLevel(n_lesma){
    int velocidade;
    int maior_velocidade=0;
    for (int i = 0; i < n_lesma; i++){
        scanf("%i", &velocidade);
        if (velocidade>maior_velocidade){
            maior_velocidade=velocidade;
        }
    }
    if (maior_velocidade >= 20){
        return printf("Level 3"); 
    }
    if ((maior_velocidade >= 10) && (maior_velocidade < 20) ){
        return printf("Level 2");
    }
    if (maior_velocidade<10){
        return printf("Level 1");    
    }
}
int main(){
    int n_lesma;
    scanf("%i", &n_lesma);
    retornaLevel(n_lesma);
    return 0;
}