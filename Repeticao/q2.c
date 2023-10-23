#include <stdio.h>
#include <math.h>
int main(){
    float temp_max;
    float inscricao;
    int total_atletas=0;

    scanf("%f", &temp_max);
    do
    {
        scanf("%f", &inscricao);
        if (inscricao == -1){
        
        } else {
            if (inscricao <= temp_max){
                total_atletas++;
            }
        }
    } while (inscricao!=-1);
    printf("%i %i", total_atletas, total_atletas/8);

    return 0;
}