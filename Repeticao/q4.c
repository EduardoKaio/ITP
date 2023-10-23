#include <stdio.h>

int main(){
    int numero;
    char letra;
    
    scanf("%i %c", &numero, &letra);
    numero=numero-1;
    // if (numero%2==1){
    //     for (int i=numero/2;i>0;i--){
    //         printf("%c%c", letra, letra);
    //         printf("\n");
    //     }
    //     printf("%c\n", letra);
    //     for (int j=0;j<numero/2;j++){
    //         printf("%c %c", letra, letra);
    //         printf("\n");
    //     }
    // } else {
        for (int i=numero/2;i>0;i--){
            printf("%c", letra);
            for (int k = 0; k < numero-2; k++){
                printf(" ");
            }
            printf("%c", letra);
            printf("\n");
            numero=numero-2;
        }
        for (int j=0;j<numero/2;j++){
            printf("%c %c", letra, letra);
            printf("\n");
        }
    }
// }