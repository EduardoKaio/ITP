#include <stdio.h>

int main(){
    int n_equipes;
    int c_corrida=0;
    int c_salto=0;
    int c_lanc=0;
    int c_total=0;
    char inscricao;
    scanf("%i", &n_equipes);

    for (int i = 0; i < n_equipes; i++){
        do {
            scanf(" %c", &inscricao);
            if (inscricao=='C'){
                c_corrida++;
            }
            if (inscricao=='S'){
                c_salto++;
            }
            if (inscricao=='L'){
                c_lanc++;
            }
            if (inscricao!='F'){
                c_total++;
            }
        } while (inscricao != 'F');
    }
    printf("%i %i %i %i", c_corrida, c_salto, c_lanc, c_total);

    return 0;
}