#include <stdio.h>

int main(){
    int entrada;
    int contador=1;
    scanf("%i", &entrada);
    
    if (entrada<=0){
        printf("Você entrou com %i, tente de novo na próxima", entrada);
    } else {
        for(int i=1; i<=entrada; i++){
            for (int j=1; j<=i; j++) {
                if (contador<9){
                    printf(" %i ", contador);
                } else{
                    printf("%i ", contador);
                }
                contador++;
            }
            printf("\n");
        }
    }
    return 0;    
}
