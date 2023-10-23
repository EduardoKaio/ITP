#include <stdio.h>

struct VetorArbitrario{
    int dimensao;
    double array[100];
};

void somaVetores(double vetor1[], double vetor2[], int dimensaoVetores){

    for (int i = 0; i < dimensaoVetores; i++){
        printf("%0.2lf ", (vetor1[i]+vetor2[i]));
    }
}

void produtoInterno(double vetor1[], double vetor2[], int dimensaoVetores){
    double multi=0;
    double acumulador=0;

    for (int i = 0; i < dimensaoVetores; i++){
        multi=(vetor1[i]*vetor2[i]);
        acumulador=acumulador+multi;
    }
    printf("\n%0.2lf ", acumulador);
}


int main(){

    struct VetorArbitrario vetor1;
    struct VetorArbitrario vetor2;
    int dimensaoVetores;

    scanf("%i", &dimensaoVetores);
    vetor1.dimensao=dimensaoVetores;
    vetor2.dimensao=dimensaoVetores;

    for (int i = 0; i < dimensaoVetores; i++){
        scanf("%lf", &vetor1.array[i]);
    }
    for (int i = 0; i < dimensaoVetores; i++){
        scanf("%lf", &vetor2.array[i]);
    }

    somaVetores(vetor1.array, vetor2.array, dimensaoVetores);
    produtoInterno(vetor1.array, vetor2.array, dimensaoVetores);

    // for (int i = 0; i < dimensaoVetores; i++){
    //     printf("%lf ", vetor1.array[i]);
    // }


    return 0;
}