#include <stdio.h>
#include <math.h>

int main(){
    int numero_elementos;

    scanf("%i ", &numero_elementos);

    if(numero_elementos>10){
        printf("Muitos elementos");
    } else {
        int a[numero_elementos];
        int b[numero_elementos];
        int resultados[numero_elementos];
        
        for (int i=0; i<numero_elementos; i++){
            scanf("%i ", &a[i]);
        }
        
        for (int i=0; i<numero_elementos; i++){
            scanf("%i ", &b[i]);
        }

        for (int i=0; i<numero_elementos; i++){
            resultados[i]=a[i]+b[i];
        }

        for (int i=0; i < numero_elementos; i++) {
            printf("%i ", resultados[i]);
        }
        
    }
    
    return 0;
}