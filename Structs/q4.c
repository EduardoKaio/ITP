#include <stdio.h>
#include <string.h>

enum TipoChocolates {BRANCO, AMARGO, AO_LEITE, COM_CASTANHAS};

struct Chocolate {
    char nome[50];  
    float peso;
    float preco;
    enum TipoChocolates tipo_chocolate;
};



int main(){
    int n_chocolates;
    int branco=0, amargo=0, ao_leite=0, com_castanha=0;
    float mais_caro=0, mais_barato=0;
    char escolha_chocolate[15];
    char nome_mais_caro[20];
    char nome_mais_barato[20];
    scanf("%i", &n_chocolates);

    struct Chocolate chocolates[n_chocolates];

    for (int i = 0; i < n_chocolates; i++){
        scanf(" %[^\n]s", chocolates[i].nome);
        scanf("%f %f\n",&chocolates[i].peso, &chocolates[i].preco);
        scanf("%s", escolha_chocolate);

        if (strcmp(escolha_chocolate, "BRANCO")==0){
            chocolates[i].tipo_chocolate = BRANCO;
            branco++;
        } else if (strcmp(escolha_chocolate, "AMARGO")==0) {
            chocolates[i].tipo_chocolate = AMARGO;
            amargo++;
        } else if (strcmp(escolha_chocolate, "AO_LEITE")==0) {
            chocolates[i].tipo_chocolate = AO_LEITE;
            ao_leite++;
        } else if (strcmp(escolha_chocolate, "COM_CASTANHAS")==0)  {
            chocolates[i].tipo_chocolate = COM_CASTANHAS;
            com_castanha++;
        } else {
            break;  

        }
        if (i == 0 || chocolates[i].preco > mais_caro) {
            mais_caro = chocolates[i].preco;
            strcpy(nome_mais_caro, chocolates[i].nome);
        }

        if (i == 0 || chocolates[i].preco < mais_barato) {
            mais_barato = chocolates[i].preco;
            strcpy(nome_mais_barato, chocolates[i].nome);
        }

    }
    
    printf("Total de chocolates BRANCO: %i\nTotal de chocolates AMARGO: %i\nTotal de chocolates AO_LEITE: %i\nTotal de chocolates COM_CASTANHAS: %i\n", branco, amargo, ao_leite, com_castanha);

            
    printf("Chocolate mais caro: %s - R$%0.2f\n", nome_mais_caro, mais_caro);

    printf("Chocolate mais barato: %s - R$%0.2f\n", nome_mais_barato, mais_barato);


    return 0;
}