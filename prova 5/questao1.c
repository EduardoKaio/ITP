#include <stdio.h>

int calcular_aposta(int largura, int altura, int bandeira[altura][largura], char cor){
    int acumulador=0;
    int divisor=largura/3;

    if (cor=='G'){
        for (int i = 1; i <= altura; i++){
        
            for (int j = 1; j <= 3; j++){
            
                for (int k = 1; k <= divisor; k++){
                    
                    if (j==1){
                        acumulador=acumulador+bandeira[i][j];
                    }
                }    
            }
        }   

    } 
    // else {
    //     if (cor=='Y'){
    //         for (int i = 1; i <= altura; i++){
            
    //             for (int j = 1; j <= 3; j++){
                
    //                 for (int k=1; k<=divisor; k++){
    //                     if (j==2){
    //                         acumulador=acumulador+bandeira[i][j];
    //                     }
    //                 }    
    //             }
    //         }
    //     } else {
    //         for (int i = 1; i <= altura; i++){
            
    //             for (int j = 1; j <= 3; j++){
                
    //                 for (int k=1; k<=divisor; k++){
    //                     if (j==3){
    //                         acumulador=acumulador+bandeira[i][j];
    //                     }
    //                 }    
    //             }
    //         }
    //     }
    // }

    return acumulador;

};

int main(){
    int largura;
    int numero_inicial;
    int aux_ni;
    char cor;

    scanf("%i %i %c", &largura, &numero_inicial, &cor);
    
    aux_ni=numero_inicial+1;
    int altura=(largura/3)*2;
    int divisor=largura/3;
    int bandeira[altura][largura];

    for (int i = 1; i <= altura; i++){
        
        for (int j = 1; j <= 3; j++){
            
            for (int k=1; k<=divisor; k++){
                bandeira[i][j]=aux_ni;
                printf("%i", aux_ni);
            }    
            
            aux_ni++;
        }   
        printf("\n");
        aux_ni=numero_inicial+1;
    }

    for (int i = 1; i <= altura; i++){
        for (int j = 1; i < ; i++)
        {
            /* code */
        }
        
    }
    


    // printf("%i %i %i ", &bandeira[1][1], &bandeira[1][2], &bandeira[1][3]);
    // int acumulador = calcular_aposta(largura, altura, bandeira[altura][largura], cor);
    
    // printf("%i", acumulador);
    return 0;
}