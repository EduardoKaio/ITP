#include <stdio.h>

struct Produto {
    int codigo;
    char nome[50];
    float preco;
};

int main(){

    int n_produtos;
    int codigo_pedido=-1;
    int quantidade;
    float acumulador=0;
    float auxiliar;
    scanf("%i", &n_produtos);


    struct Produto produtos[n_produtos];

    for (int i = 0; i < n_produtos; i++){
        scanf("%i",&produtos[i].codigo);
        scanf(" %[^\n]s", produtos[i].nome);
        scanf("%f",&produtos[i].preco);
    }
    while (codigo_pedido!=0){
        scanf("%i %i", &codigo_pedido, &quantidade);
        
        for (int i = 0; i < n_produtos; i++){
            if(produtos[i].codigo==codigo_pedido){
                auxiliar=produtos[i].preco*quantidade;
                acumulador=acumulador+auxiliar;
            }
        }
    }
    printf("%0.2f", acumulador);



    return 0;
}