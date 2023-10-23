#include <stdio.h>

int main(){
    int n_alunos;
    scanf("%i", &n_alunos);
    
    int chamada[n_alunos+1];
    int contador_aux=0;
    float notas[n_alunos+1];
    int cont_aprovados=0; 
    int cont_reprovados=0;
    int cont_recuperacao=0;

    for (int i=1; i<=n_alunos; i++) {
        scanf("%i - %f",&chamada[i],&notas[i]);
        
        if(notas[i]>= 7.0){
            cont_aprovados++;
        } 
        if((notas[i]>=5.0) && (notas[i]<7.0)){
            cont_recuperacao++;
        }   
        if (notas[i]<5.0){
            cont_reprovados++;
        }
    }
    
    printf("Aprovados: ");
    for (int i = 1; i <=n_alunos; i++) {
        if(notas[i]>= 7){
            contador_aux++;
            if (contador_aux==cont_aprovados){
               printf("%i (%0.1f)", chamada[i], notas[i]);
            } else {
                printf("%i (%0.1f), ", chamada[i], notas[i]);
            }
        }
    }

    printf("\nRecuperação: ");
    contador_aux=0;
    for (int i = 1; i <=n_alunos; i++) {
        
        if((notas[i]>=5) && (notas[i]<=7)){
            contador_aux++;
            if (contador_aux==cont_recuperacao){
               printf("%i (%0.1f)", chamada[i], notas[i]);
            } else {
                printf("%i (%0.1f), ", chamada[i], notas[i]);
            }
        }
    }

    printf("\nReprovados: ");
    contador_aux=0;
    for (int i = 1; i <=n_alunos; i++) {
        if (notas[i]<5){
            contador_aux++;
            if (contador_aux==cont_reprovados){
               printf("%i (%0.1f)", chamada[i], notas[i]);
            } else {
                printf("%i (%0.1f), ", chamada[i], notas[i]);
            }
        }
    }
    return 0;
}