#include <stdio.h>
#include <math.h>

int main(){
    int b[3];
    int c[3];
    int d[3];
    int resultados[3];

    for (int i=0; i<3; i++){    
        scanf("%i", &b[i]);
    }
    for (int i=0; i<3; i++){    
        scanf("%i", &c[i]);
    }
    for (int i=0; i<3; i++){    
        scanf("%i", &d[i]);
    }

    for (int j=0; j<3; j++){
        resultados[j]=b[j]+c[j]-(5*d[j]);
    }
    printf("A = [%i, %i, %i] ", resultados[0], resultados[1], resultados[2]);
    return 0;
}