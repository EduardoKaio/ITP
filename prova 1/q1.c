#include <stdio.h>

int main(){
    
    int numero;
    scanf("%i", &numero);
    
    if (numero<=9){
        printf("%i", numero);
    }
    if ((numero>9) && (numero<=99)){
        printf("%i\n%i", numero/10, numero%10);
    }
    
    if ((numero>99) && (numero<=999)){
        printf("%i\n%i\n%i", numero/100, ((numero/10)-(numero/100)*10), numero%10);
    }
    
    if ((numero>999) && (numero<=9999)){
        printf("%i\n%i\n%i\n%i", numero/1000, (numero/100-(numero/1000)*10), ((numero/10)-(numero/100)*10), numero%10);
    }

    if ((numero>9999) && (numero<=99999)){
        printf("%i\n%i\n%i\n%i\n%i",numero/10000, (numero/1000-(numero/10000)*10), (numero/100-(numero/1000)*10), ((numero/10)-(numero/100)*10), numero%10);
    }
    if (numero>99999){
    printf("ERRO!");
    }


    return 0;
}