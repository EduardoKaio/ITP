#include <stdio.h>
#include <math.h>

int main(){
    int n_amigos;
    int vencedor;
    int montante=0;
    float bebidas=0;
    int acumula_vencedores=0;
    int cont_ganhadores=0;

    scanf("%i", &n_amigos);
    
    float aposta[n_amigos];
    int jogador_apostado[n_amigos];
    
    for (int i = 1; i <= n_amigos; i++){
        scanf("%f %i", &aposta[i], &jogador_apostado[i]);
        montante=montante+aposta[i];
    }
    
    scanf("%i", &vencedor);
    printf("Total: R$ %i\n", montante);
    
    bebidas=ceil(montante*0.1);
    montante=montante-bebidas;

    for (int i = 1; i <=n_amigos; i++){
        if(vencedor==jogador_apostado[i]){
            acumula_vencedores=acumula_vencedores+aposta[i];
            cont_ganhadores++;
        }
    }

    if (cont_ganhadores==0){
        for (int i = 1; i <=n_amigos; i++){
            printf("Apostador %i: R$ %.0f\n", i, floor(aposta[i]-(aposta[i]/10)));  
        }
    } else {
        for (int i = 1; i <=n_amigos; i++){
            if(vencedor==jogador_apostado[i]){
                printf("Apostador %i: R$ %.0f\n", i, round((aposta[i]/acumula_vencedores)*montante));  
            }
        }
    }
    
    printf("Bebidas e petiscos: R$ %.0f", bebidas);


    return 0;
}