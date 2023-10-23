#include <stdio.h>

int main(){
    float temp;
    char letra;
    scanf("%f %c", &temp, &letra);
    
    if (letra=='C'){
    printf("Celsius: %.2f\nFarenheit: %.2f\nKelvin: %.2f", temp, ((temp*1.8)+32), (temp+273.15));
    }
    if (letra=='F'){
    printf("Celsius: %.2f\nFarenheit: %.2f\nKelvin: %.2f", ((temp-32)/1.8), temp, ((temp-32)/1.8)+273.15);
    }
    if (letra=='K'){
    printf("Celsius: %.2f\nFarenheit: %.2f\nKelvin: %.2f", (temp-273.15), (((temp-273.15)*1.8)+32), temp);
    }
    return 0;
}