#include <stdio.h>
#include <math.h>

int SomarDivisores(int numero){
    int acumulador=0;
    for (int i = 1; i < numero; i++){
        if (numero%i==0){
            acumulador=acumulador+i;
        }
    }
    return acumulador;
}
int Colegas(int soma_A, int soma_B, int A, int B){
    if ((abs(soma_A-B)<=2) && (abs(soma_B-A)<=2)){
        return printf("S");
    } else {
        return printf("N");
    }
}

int main(){
    int n_a;
    int n_b;
    scanf("%i %i", &n_a, &n_b);
    int soma_A = SomarDivisores(n_a);
    int soma_B = SomarDivisores(n_b);
    
    Colegas(soma_A, soma_B, n_a, n_b);

    return 0;
}