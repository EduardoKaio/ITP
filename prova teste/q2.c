#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");
    char letra;
    int vezes;
    float valor;
    scanf("%c %i %f", &letra, &vezes, &valor);
    printf("A popularidade de %c é %.1f ", letra, valor*vezes);

    return 0;
}