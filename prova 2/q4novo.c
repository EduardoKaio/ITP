#include <stdio.h>
#include <math.h>

int main(){
    int numero;
    char letra;
    int aux;
    int aux1;
    scanf("%i %c", &numero, &letra);
    numero=numero-1;
    aux=numero;
    aux1=ceil((numero-1)/2);
    
    if (numero%2==1){
        for (int i=0; i<numero/2; i++){
            for (int j = 0; j < i; j++){
                printf(" ");
            }
            printf("%c", letra);
            for (int k = 0; k<aux-2; k++){
                printf(" ");
            }
            printf("%c", letra);

            printf("\n");
            aux=aux-2;
        }
        for (int i = 0; i < aux1; i++){
            printf(" ");
        }
        printf("%c\n", letra);
        
        for (int i=0; i<numero/2; i++){
            for (int j = aux1; j>1; j--){
                printf(" ");
            }
            printf("%c", letra);
            for (int k=0; k<aux; k++){
                printf(" ");
            }
            printf("%c", letra);

            printf("\n");
            aux=aux+2;
            aux1--;
        }
    } else {
        for (int i=0; i<numero/2; i++){
            for (int j = 0; j < i; j++){
                printf(" ");
            }
            printf("%c", letra);
            for (int k = 0; k<aux-2; k++){
                printf(" ");
            }
            printf("%c", letra);

            printf("\n");
            aux=aux-2;
        }
        for (int i=0; i<numero/2; i++){
            for (int j = aux1; j>0; j--){
                printf(" ");
            }
            printf("%c", letra);
            for (int k=0; k<aux; k++){
                printf(" ");
            }
            printf("%c", letra);

            printf("\n");
            aux=aux+2;
            aux1--;
        }
    }
}