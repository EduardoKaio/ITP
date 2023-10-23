#include <stdio.h>
#include <math.h>

float calculaMedia(char tipo, float n1, float n2, float n3){
    if (tipo == 'A'){
        return printf("Média %.2f", (n1+n2+n3)/3);
    } 
    if (tipo == 'P'){
        return printf("Média %.2f", ((n1*4)+(n2*5)+(n3*6))/15);
    }
}

int main(){
    char tipo;
    float n1; 
    float n2; 
    float n3;
    scanf("%c %f %f %f", &tipo, &n1, &n2, &n3);

    calculaMedia(tipo, n1, n2, n3);
    return 0;
}