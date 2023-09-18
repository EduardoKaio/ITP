#include <stdio.h>

int main(){
    int qtd_herois;
    int classe_herois;
    int nivel_ameaca;
    
    scanf("%i %i %i", &qtd_herois, &classe_herois, &nivel_ameaca); 

    if (nivel_ameaca==1){
        if (((classe_herois>2) && (qtd_herois>0)) || ((qtd_herois==3) && (classe_herois==1))){
            printf("Heróis vencerão!");
        } else {
            printf("Melhor chamar o saitama!");
        }
    }
    if (nivel_ameaca==2){
        if (((classe_herois>3) && (qtd_herois>0)) || ((qtd_herois==3) && (classe_herois==2))){
            printf("Heróis vencerão!");
        } else {
            printf("Melhor chamar o saitama!");
        }
    }
    if (nivel_ameaca==3){
        if (((classe_herois>=4) && (qtd_herois>0)) || ((qtd_herois==3) && (classe_herois==3))){
            printf("Heróis vencerão!");
        } else {
            printf("Melhor chamar o saitama!");
        }
    }
    if (nivel_ameaca==4){
        if (((classe_herois==5) && (qtd_herois>0)) || ((qtd_herois==3) && (classe_herois==4))){
            printf("Heróis vencerão!");
        } else {
            printf("Melhor chamar o saitama!");
        }
    }
    if (nivel_ameaca==5){
        if (((classe_herois==5) && (qtd_herois>0))){
            printf("Heróis vencerão!");
        } else {
            printf("Melhor chamar o saitama!");
        }
    }

    return 0;
}